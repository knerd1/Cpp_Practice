#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
int target = 9;

int lowerBound(vector<int> nums, int target) {
  int low = 0, high = nums.size() - 1;
  int ans = nums.size();

  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] >= target) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}
int main() {
  int result = lowerBound(nums, target);
  cout << result << endl;
}
