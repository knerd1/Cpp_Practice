#include <iostream>
#include <vector>

using namespace std;

// Brute Force == Any sorting...

// Better Approach...
vector<int> nums = {1, 0, 2, 0, 1, 2, 0, 1, 1, 0};
int n = nums.size();
int main() {
  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 0)
      cnt0++;
    else if (nums[i] == 1)
      cnt1++;
    else
      cnt2++;
    for (int i = 0; i < cnt0; i++)
      nums[i] = 0;
    for (int i = cnt0; i < cnt0 + cnt1; i++)
      nums[i] = 1;
    for (int i = cnt0 + cnt1; i < nums.size(); i++)
      nums[i] = 2;
    for (auto it : nums) {
      cout << it << endl;
    }
  }
}

// Optimal Approach...`Dutch national Flag Algo`

int low = 0, mid = 0, high = n - 1;
int main() {
  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    } else if (nums[mid] == 1) {
      mid++;
    } else {
      swap(nums[mid], nums[high]);
      high--;
    }
  }
  for (auto it : nums) {
    cout << it << endl;
  }
}
