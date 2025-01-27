// Only obey the Sorted order and ignores the unique

#include <iostream>
#include <set>

using namespace std;

void multiSetUses() {
  multiset<int> mt;
  mt.insert(1);  //{1}
  mt.insert(1);  //{1,1}
  mt.insert(1);  //{1,1,1}
  mt.emplace(2); //{1,1,1,2}

  mt.erase(1);          // All 1'S will be deleted
  mt.erase(mt.find(1)); // Only Single 1 will be delete

  int cnt = mt.count(1);

  for (auto output : mt) {
    cout << output;
  }
}

int main() { multiSetUses(); }
