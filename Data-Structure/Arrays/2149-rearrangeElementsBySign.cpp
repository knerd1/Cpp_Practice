#include <iostream>
#include <vector>

using namespace std;

// Brute Force...

vector<int> nums = {1, -2, 4, -5, -7, 5};
vector<int> positive;
vector<int> negative;

int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] >= 0) {
      positive.emplace_back(nums[i]);
    } else {
      negative.emplace_back(nums[i]);
    }
  }
  for (int i = 0; i < nums.size() / 2; i++) {
    nums[2 * i] = positive[i];
    nums[2 * i + 1] = negative[i];
  }
  for (auto it : nums) {
    cout << it << endl;
  }
}

// Optimal...

vector<int> ans(nums.size());
int posIndex = 0;
int negIndex = 1;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > 0) {
      ans[posIndex] = nums[i];
      posIndex += 2;
    } else {
      ans[negIndex] = nums[i];
      negIndex += 2;
    }
  }
  for (auto it : ans) {
    cout << it << endl;
  }
  return 0;
}

// Variety 2...

vector<int> nums = {1, -2, 4, 5, 6, -7};

int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] >= 0) {
      positive.emplace_back(nums[i]);
    } else {
      negative.emplace_back(nums[i]);
    }
  }
  if (positive.size() > negative.size()) {

    for (int i = 0; i < negative.size(); i++) {
      nums[i * 2] = positive[i];
      nums[i * 2 + 1] = negative[i];
    }

    int index = negative.size() * 2;

    for (int i = negative.size(); i < positive.size(); i++) {
      nums[index] = positive[i];
      index++;
    }

  } else {

    for (int i = 0; i < positive.size(); i++) {
      nums[i * 2] = positive[i];
      nums[i * 2 + 1] = negative[i];
    }

    int index = positive.size() * 2;

    for (int i = positive.size(); i < negative.size(); i++) {
      nums[index] = negative[i];
      index++;
    }
  }
  for (auto it : nums) {
    cout << it << endl;
  }
}
