#include <climits>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {3, 3, 4, 5, 1, 2};

int roatedCount(vector<int> nums) {
  int low = 0, high = nums.size() - 1, ans = INT_MAX, index = -1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
      low++, high--;
      continue;
    }

    if (nums[low] <= nums[high]) {
      if (nums[low] < ans) {
        index = low;
        ans = nums[low];
        break;
      }
    }

    if (nums[low] <= nums[mid]) {
      if (nums[low] < ans) {
        index = low;
        ans = nums[low];
        low = mid + 1;
      }
    } else {
      if (nums[mid] < ans) {
        index = mid;
        ans = nums[mid];
        high = mid - 1;
      }
    }
  }
  return index;
}

int main() {
  int result = roatedCount(nums);
  cout << result << endl;
}
