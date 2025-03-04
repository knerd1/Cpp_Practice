#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> nums = {2, 2, 1, 3, 3, 2, 2};

// Brute Force...

int main() {
  for (int i = 0; i < nums.size(); i++) {
    int cnt = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] == nums[i])
        cnt++;
    }
    if (cnt > nums.size() / 2)
      cout << nums[i];
  }
}

// Better (Hashing)...

unordered_map<int, int> mpp;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    mpp[nums[i]]++;
  }
  for (auto it : mpp) {
    if (it.second > nums.size() / 2) {
      cout << it.first;
    }
  }
}

// Optimal (Boyer-Moore Voting Algorithm)...

int count = 0;
int el;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (count == 0) {
      count = 1;
      el = nums[i];
    } else if (nums[i] == el) {
      count++;
    } else {
      count--;
    }
  }
  int count1 = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == el)
      count1++;
  }
  if (count1 > nums.size() / 2) {
    cout << el;
  }
  return -1;
}
