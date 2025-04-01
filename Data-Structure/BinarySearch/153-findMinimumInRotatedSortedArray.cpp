#include <climits>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {3, 4, 5, 1, 2};

int minSearch(vector<int> nums) {
  int low = 0, high = nums.size() - 1, ans = INT_MAX;
  while (low <= high) {
    int mid = (low + high) / 2;

    if (nums[low] <= nums[high]) { // Search Space is already sorted
      ans =
          min(ans, nums[low]); // Then nums[low] will be always smaller in space
      break;
    }

    if (nums[low] <= nums[mid]) { // if left half is sorted
      ans = min(ans, nums[low]);  // pickup the min element
      low = mid + 1;              // and eliminate the whole half

    } else {                     // if right half is sorted
      ans = min(ans, nums[mid]); // pickup the min element
      high = mid - 1;            // and eliminate the whole half
    }
  }

  return ans;
}

int main() {
  int minResult = minSearch(nums);
  cout << minResult << endl;
}
