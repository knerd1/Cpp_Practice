// Deque is same as vectors and list...

#include <deque>
#include <iostream>

using namespace std;

void listUses() {
  deque<int> dq;
  dq.push_back(2);    //{2}
  dq.emplace_back(6); //{2,6}

  dq.push_front(11);   //{11,2,6}
  dq.emplace_front(8); //{8,11,2,6}
  for (auto dqoutput : dq) {
    cout << dqoutput << " ";
  }
}
int main() { listUses(); }
