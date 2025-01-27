// FIFO order

#include <iostream>
#include <queue>

using namespace std;

void queueUses() {
  queue<int> qq;
  qq.push(3);    //{3}
  qq.push(5);    //{3,5}
  qq.emplace(8); //{3,5,8}

  qq.back() += 4;     //{3,5,12}
  cout << qq.back();  // Print 12
  cout << qq.front(); // Print 3

  qq.pop(); //{5,12}
  cout << qq.front();
}

int main() { queueUses(); }
