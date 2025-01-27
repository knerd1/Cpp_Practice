// Put maximum elements at front

#include <iostream>
#include <queue>

using namespace std;

void priorityQueueUses() { // Max heap
  priority_queue<int> pq;
  pq.push(2);     //{2}
  pq.push(1);     //{2,1}
  pq.emplace(5);  //{5,2,1}
  pq.emplace(10); //{10,5,2,1}

  cout << pq.top(); // Print 10
  pq.pop();
  cout << pq.top(); // print 5

  //{what if i want to store minimum element at top}
  priority_queue<int, vector<int>, greater<int>> pqm; // Min heap
  pqm.push(3);                                        //{3}
  pqm.push(5);                                        //{3,5}
  pqm.push(2);                                        //{2,3,5}
  pqm.push(8);                                        //{2,3,5,8}
  pqm.emplace(1);                                     //{1,2,3,5,8}

  cout << pqm.top(); // Print 2
}

int main() { priorityQueueUses(); }
