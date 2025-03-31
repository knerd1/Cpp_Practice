#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {1, 2, 1};
int target = 1;
int n = nums.size();

int roatedElements(vector<int> nums, int n, int target) {
  int low = 0, high = n - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target)
      return true;
    if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
      low++;
      high++;
      continue;
    }

    if (nums[low] <= nums[mid]) {
      if (nums[low] <= target && target <= nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      if (nums[mid] <= target && target <= nums[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return false;
}

int main() { int result = roatedElements(nums,n, target);
  cout << result << endl;
}
