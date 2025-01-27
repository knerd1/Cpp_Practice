// In set everything will be sorted and unique

#include <iostream>
#include <set>

using namespace std;

void setUses() {
  set<int> st;
  st.insert(2);  //{2}
  st.insert(1);  //{1,2}
  st.insert(2);  //{1,2} it will not again insert 2
  st.emplace(5); //{1,2,5}
  st.insert(4);  //{1,2,4,5} ==> 4 insert in sorted order

  //{1,2,3,4,5}
  auto it = st.find(3);  // Return iterator which will be point to 3...
  auto its = st.find(7); // If element is not present, it will return st.end()
  st.erase(4);           // Delete 4 and maintain the sorted order

  for (auto sets : st) {
    cout << sets;
  }
}

int main() { setUses(); }
