#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

struct Employee {
  int id;
  string name;
  double salary;
};

void displayEmployeeDetails(const Employee &emp) {
  cout << "ID: " << emp.id << " , Name: " << emp.name << ", Salary: $"
       << emp.salary << endl;
}

int main() {
  vector<Employee> employees = {
      {101, "Bob", 10000},  {102, "Warner", 14000}, {103, "Marine", 16000},
      {104, "Jatin", 6000}, {105, "Ketan", 43000},
  };

  sort(employees.begin(), employees.end(),
       [](Employee &e1, Employee &e2) { return e1.salary > e2.salary; });

  cout << "Employee sorted by Salary -> Highest to lowest\n";
  for_each(employees.begin(), employees.end(), displayEmployeeDetails);

  vector<Employee> highEarners;
  copy_if(employees.begin(), employees.end(), back_inserter(highEarners),
          [](const Employee &e) { return e.salary > 15000; });

  cout << "Employee who are High Earners\n";
  for_each(highEarners.begin(), highEarners.end(), displayEmployeeDetails);

  double totalsalary =
      accumulate(employees.begin(), employees.end(), 0.0,
                 [](double sum, Employee &e) { return sum + e.salary; });

  double averageSalary = totalsalary / employees.size();

  auto highestPaid = max_element(employees.begin(), employees.end(),
                                 [](const Employee &e1, const Employee &e2) {
                                   return e1.salary < e2.salary;
                                 });
  auto minimumPaid = min_element(employees.begin(), employees.end(),
                                 [](const Employee &e1, const Employee &e2) {
                                   return e1.salary > e2.salary;
                                   ;
                                 });
  return 0;
}
