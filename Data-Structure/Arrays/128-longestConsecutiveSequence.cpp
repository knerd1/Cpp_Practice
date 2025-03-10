#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>

using namespace std;

// Brute Force...

class longer {
public:
  int longestConsecutive(vector<int> &nums) {
    if (nums.empty())
      return 0;      // Handle empty case
    int longest = 1; // Start with 1 because if we chose one element longest
                     // will be always 1...
    for (int i = 0; i < nums.size(); i++) {
      int x = nums[i];
      int cnt = 1; // Start with 1 to count the current number
      bool found = false;
      for (int j = 0; j < nums.size(); j++) { // Linear Search For x+1
                                              // element...
        if (nums[j] == x + 1) {
          found = true;
          break;
        }
      }
      while (found == true) {
        x = x + 1;
        cnt = cnt + 1;
        found = false;
        for (int j = 0; j < nums.size(); j++) {
          if (nums[j] == x + 1) {
            found = true;
            break;
          }
        }
      }
      longest = max(longest, cnt);
    }
    cout << longest;
    return 0;
  }
};

int main() {
  vector<int> nums = {};
  longer answer;
  int result = answer.longestConsecutive(nums);
  cout << result << endl;
}

// Better...

vector<int> nums = {100, 102, 100, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2};

int main() {
  if (nums.size() == 0)
    return 0; // Handle empty array case...

  sort(nums.begin(), nums.end()); // Sort the vector...

  int curCnt = 1;
  int LastSmaller = nums[0];
  int longest = 1;

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] == LastSmaller) {
      continue;
    } else if (nums[i] == LastSmaller + 1) {
      curCnt += 1;
      LastSmaller = nums[i];
    } else {
      curCnt = 1;
      LastSmaller = nums[i];
    }
    longest = max(longest, curCnt);
  }
  cout << longest << endl;
}

// Optimal...

vector<int> nums = {100, 102, 100, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2};

int main() {
  if (nums.size() == 0)
    return 0;
  int longest = 1;

  unordered_set<int> st;
  for (int i = 0; i < nums.size(); i++) {
    st.insert(nums[i]);
  }

  for (auto it : st) {
    if (st.find(it - 1) == st.end()) {
      int cnt = 1;
      int x = it;
      while (st.find(x + 1) != st.end()) {
        x = x + 1;
        cnt += 1;
      }
      longest = max(longest, cnt);
    }
  }
  cout << longest << endl;
}
