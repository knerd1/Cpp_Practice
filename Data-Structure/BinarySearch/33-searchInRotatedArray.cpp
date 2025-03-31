#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {7, 8, 9, 1, 2, 3, 4, 5, 6};
int target = 1;
int n = nums.size();

int roatedSearch(vector<int> nums, int target, int n) {
  int low = 0, high = n - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target)
      return mid;

    // now Check sorted half

    // Left Half
    if (nums[low] <= nums[mid]) {
      if (nums[low] <= target &&
          target <= nums[mid]) { // Check element is in this half
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    else { // right half
      if (nums[mid] <= target &&
          target <= nums[high]) { // Check element is in this half
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return -1;
}

int main() {
  int result = roatedSearch(nums, target, n);
  cout << result << endl;
}
