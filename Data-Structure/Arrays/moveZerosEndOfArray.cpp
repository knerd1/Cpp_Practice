#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vt = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

  // Step 1: iterate and store all non zero numbers...
  vector<int> temp;
  for (int i = 0; i < vt.size(); i++) {
    if (vt[i] != 0) {
      temp.push_back(vt[i]);
    }
  }

  // Step 2: put all non zero numbers into front of vector...
  for (int i = 0; i < temp.size(); i++) {
    vt[i] = temp[i];
  }

  // Step 3: fill remaining places of vector with 0...
  for (int i = temp.size(); i < vt.size(); i++) {
    vt[i] = 0;
  }

  for (auto it : vt) {
    cout << it << endl;
  }
}
