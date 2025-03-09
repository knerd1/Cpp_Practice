#include <climits>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {61, 61, 17};
vector<int> arr;

// Brute Force...

int main() {
  for (int i = 0; i < nums.size(); i++) {
    bool leader = true;
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[j] > nums[i]) {
        leader = false;
        break;
      }
    }
    if (leader == true) {
      arr.push_back(nums[i]);
    }
  }
  for (auto it : arr) {
    cout << it << endl;
  }
}

// Optimal...

int maxi = INT_MIN;
int main() {
  for (int i = nums.size() - 1; i >= 0; i--) {
    if (nums[i] >= maxi) {
      maxi = nums[i];
      arr.push_back(nums[i]);
    }
  }
  for (auto it : arr) {
    cout << it << endl;
  }
}
