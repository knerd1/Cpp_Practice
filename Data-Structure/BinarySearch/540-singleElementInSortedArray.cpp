#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6};
int n = nums.size();

// Brute Force...
int main() {

  if (nums.size() == 1)
    cout << nums[0];

  for (int i = 0; i < nums.size(); i++) {
    if (i == 0) {

      if (nums[i] != nums[i + 1])
        cout << nums[i] << endl;

    } else if (i == nums.size() - 1) {

      if (nums[i] != nums[i - 1])
        cout << nums[i] << endl;

    } else {

      if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1])
        cout << nums[i] << endl;
    }
  }
}

// Binary Search...

int singleElement(vector<int> nums, int n) {

  if (n == 1)
    return nums[0]; // If array has only one element

  if (nums[0] != nums[1])
    return nums[0]; // for 1st element check

  if (nums[n - 1] != nums[n - 2])
    return nums[n - 1]; // For last element check

  int low = 1, high = n - 2;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
      return nums[mid]; // if Mid is single element

    // We are in left
    if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
        (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
      low = mid + 1;
    }
    // We are in right
    else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int result = singleElement(nums, n);
  cout << result << endl;
}
