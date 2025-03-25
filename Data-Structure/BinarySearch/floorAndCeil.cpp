#include <iostream>
#include <vector>

using namespace std;

int floor(vector<int> nums, int x) {
  int ans = -1;
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] <= x) {
      ans = nums[mid];
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int ceil(vector<int> nums, int x) {
  int ans = -1;
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] >= x) {
      ans = nums[mid];
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

int main() {
  vector<int> nums = {10, 20, 30, 40, 50};
  int x = 25;
  int result = ceil(nums, x);
  cout << result << endl;
}
