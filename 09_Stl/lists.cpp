// List are same as vectors but they also gives front operations

#include <iostream>
#include <list>

using namespace std;

void listUses() {
  list<int> ll;
  ll.push_back(2);    //{2}
  ll.emplace_back(6); //{2,6}

  ll.push_front(11);   //{11,2,6}
  ll.emplace_front(8); //{8,11,2,6}
  for (auto lloutput : ll) {
    cout << lloutput << " ";
  }
}

int main() { listUses(); }
