#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<int> nums = {2, 4, 6, 8, 8, 8, 11, 13};
int target = 8;

// Brute Force...

vector<int> searchRange(vector<int> &nums, int target) {
  int first = -1, last = -1;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == target) {
      if (first == -1)
        first = i;
      last = i;
    }
  }
  return {first, last};
}

int main() {

  vector<int> result = searchRange(nums, target);
  for (auto it : result) {
    cout << it << endl;
  }
}

// optimal (Binary Search)...

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

int upperBound(vector<int> nums, int target) {
  int low = 0, high = nums.size() - 1;
  int ans = nums.size();
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] > target) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

pair<int, int> firstAndLastPosition(vector<int> nums, int target) {
  int lb = lowerBound(nums, target);
  if (lb == nums.size() || nums[lb] != target)
    return {-1, -1};
  return {lb, upperBound(nums, target) - 1};
}

int main() {
  pair<int, int> result = firstAndLastPosition(nums, target);
  cout << result.first << result.second;
}

// second solution....

int firstOccerence(vector<int> nums, int target) {
  int low = 0, high = nums.size() - 1;
  int first = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target) {
      first = mid;
      high = mid - 1;
    } else if (nums[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return first;
}

int lastOccerence(vector<int> nums, int target) {
  int low = 0, high = nums.size() - 1;
  int last = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target) {
      last = mid;
      low = mid + 1;
    } else if (nums[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return last;
}

pair<int, int> firstAndLastPositon(vector<int> nums, int target) {
  int first = firstOccerence(nums, target);
  if (first == -1)
    return {-1, -1};
  int last = lastOccerence(nums, target);
  return {first, last};
}

int main() {
  pair<int, int> result = firstAndLastPositon(nums, target);
  cout << result.first << "," << result.second << endl;
}
