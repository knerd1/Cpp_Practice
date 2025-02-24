#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

// Brute Force...
int getLongestSubarray(vector<int> vt, int K) {
  int n = vt.size();

  int length = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      long long s = 0;
      for (int k = i; k < j; k++) {
        s += vt[k];
      }
      if (s == K)
        length = max(length, j - i + 1);
    }
  }
  return length;
}

int main() {
  vector<int> vt = {1, 2, 3, 1, 1, 1, 1, 3, 3};
  long long K = 6;
  int len = getLongestSubarray(vt, K);
  cout << len << endl;
}

// Better approach...
vector<int> a = {1, 2, 3, 1, 1, 1, 1, 3, 3};
long long k = 6;

int main() {
  map<long long, int> preSum;
  long long sum = 0;
  int maxLen = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += a[i];
    if (sum == k) {
      maxLen = max(maxLen, i + 1);
    }
    long long rem = sum - k;
    if (preSum.find(rem) != preSum.end()) {
      int len = i - preSum[rem];
      maxLen = max(maxLen, len);
    }
    if (preSum.find(sum) == preSum.end()) {
      preSum[sum] = i;
    }
  }
  cout << maxLen;
  for (auto it : preSum) {
    cout << it.first << endl;
  }
}

// Optimal...
int longestSubArrayWithSumK(vector<int> a, long long k) {
  int left = 0, right = 0;
  long long sum = 0;
  int maxLen = 0;
  int n = a.size();
  while (right < n) {
    sum += a[right];

    while (left <= right && sum > k) {
      sum -= a[left];
      left++;
    }

    if (sum == k) {
      maxLen = max(maxLen, right - left + 1);
    }
    right++;
  }
  return maxLen;
}

int main() {
  vector<int> a = {1, 2, 3, 1, 1, 1, 1, 3, 3};
  long long k = 6;
  int result = longestSubArrayWithSumK(a, k);
  cout << result << endl;
}
