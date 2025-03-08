#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

vector<int> nums = {1, 1, 5};
// Better...

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
  for (int i = n - 2; i >= 0; i--) { // start from back and find smallest dip
                                     // num
    if (nums[i] < nums[i + 1]) {
      ind = i;
      break;
    }
  }

  if (ind == -1) { // Here if no dip found that means simple reverse the array
    reverse(nums.begin(), nums.end());
    return 0;
  }

  for (int i = n - 1; i > ind;
       i--) { // Now find the bigger than ind and (smallest than remaings)
    if (nums[i] > nums[ind]) {
      swap(nums[i], nums[ind]); // Swap both(1,3...)
      break;
    }
  }

  reverse(nums.begin() + ind + 1, nums.end()); // At end reverse the left array
  for (auto it : nums) {
    cout << it << endl;
  }
}
