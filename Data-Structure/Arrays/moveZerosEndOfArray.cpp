#include <iostream>
#include <vector>

using namespace std;
// Brute Force Approach
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

  // Optimal Approach...
  int arr[9] = {1, 0, 2, 3, 0, 0, 4, 5, 1};

  // Step 1: find 0th element and store it...
  int j = -1;
  for (int i = 0; i < 9; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }
  // Step 2: Check next element is 0 or not if find 0 then swap it with j...
  for (int i = j + 1; i < 9; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }
  for(int i=0;i<9;i++){
    cout << arr[i] << endl;
  }
}
