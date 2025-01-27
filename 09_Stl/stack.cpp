// LIFO order

#include <iostream>
#include <stack>
using namespace std;

void stackUses() {
  stack<int> st;
  st.push(1);       //{1}
  st.push(2);       //{2,1}
  st.push(3);       //{3,2,1}
  st.push(3);       //{3,3,2,1}
  st.emplace(11);   //{11,3,3,2,1}
  cout << st.top(); // Print 11

  st.pop();           // Now st will look like {3,3,2,1}
  cout << st.top();   // Print 3
  cout << st.size();  // 4
  cout << st.empty(); // False

  stack<int> st1, st2;
  st1.swap(st2);
}

int main() { stackUses(); }
