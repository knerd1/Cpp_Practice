#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return false;

  // If they are same...
  if (p1.first > p2.first)
    return true;
  return false;
}

void sortAlgo() {
  int a[5] = {3, 5, 8, 9, 4};
  int n = sizeof(a) / sizeof(a[0]);
  sort(a, a + n); // a = start iterator, a+n = ending iterator...

  // Sorting in decreasing order
  sort(a, a + n, greater<int>()); // Greater is inbuilt comparator(it will...
                                  // automatically sort in desending order)

  // Custom way Sorting
  pair<int, int> arr[3] = {{1, 2}, {2, 1}, {4, 1}};
  int n1 = sizeof(arr) / sizeof(arr[0]);

  // Sort it according to the second element op==>{2,1},{4,1},{1,2}...
  // if second element is same then sort it according to first element in
  // decreasing order... op ==>{4,1}{2,1}{1,2}...
  sort(arr, arr + n1, comp);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " " << endl;
  }
  for (auto its : arr) {
    cout << its.first << " " << its.second << endl;
  }
}

int main() { sortAlgo(); }
