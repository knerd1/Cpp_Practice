#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

vector<int> nums = {1, 2, 3};

int main() {
  next_permutation(nums.begin(), nums.end());
  for (auto it : nums) {
    cout << it << endl;
  }
}
// Optimal...
int ind = -1;
int n = nums.size();
int main() {
  for (int i = n - 2; i < 0; i--) {
    if (nums[i] < nums[i + 1]) {
      ind = i;
      break;
    }
  }
  if (ind == -1) {
    reverse(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
      cout << nums[i] << endl;
    }
  }
  for (int i = n - 1; i < ind; i--) {
    if (nums[i] > nums[ind]) {
      swap(nums[i], nums[ind]);
      break;
    }
  }
  reverse(nums.begin() + ind + 1, nums.end());
  for (auto it : nums) {
    cout << it << endl;
  }
}
