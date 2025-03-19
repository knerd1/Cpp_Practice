#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {-1, 0, 3, 5, 9, 12};
int target = 3;
int low = 0;
int high = nums.size() - 1;

int main() {
  while (low <= high) {
    int mid = (low + high) / 2;
    if (target == nums[mid]) {
      cout << mid;
      return 0;
    } else if (target > nums[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }
  cout << -1;
}

// Recusive...

int bs(vector<int> nums, int low, int high, int target) {
  if (low > high)
    return -1;
  int mid = (low + high) / 2;
  if (nums[mid] == target)
    return mid;
  else if (target > nums[mid])
    return bs(nums, mid + 1, high, target);
  return bs(nums, low, mid - 1, target);
}

int main() {
  int result = bs(nums, low, high, target);
  cout << result;
}

// If 0....................INT_MAX
// then use mid = low+(high-low)/2
