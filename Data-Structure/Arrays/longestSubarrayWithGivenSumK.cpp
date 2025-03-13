#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Brute Force...
// int getLongestSubarray(vector<int> vt, int sum) {
//   int n = vt.size();
//   int length = 0;
//   for (int i = 0; i < n; i++) {
//     int sum = 0;
//     for (int j = i; j < n; j++) {
//       sum += vt[j];
//       if (sum == j) {
//         length = max(length, j - i + 1);
//       }
//     }
//   }
//   return length;
// }
//
// int main() {
//   vector<int> vt = {1, 2, 3, 1, 1, 1, 1, 3, 3};
//   long long sum = 6;
//   int len = getLongestSubarray(vt, sum);
//   cout << len << endl;
// }

// // Better approach...
vector<int> a = {1, 2, 3, 1, 1, 1, 1, 3, 3};
long long k = 6;

int main() {
  unordered_map<long long, int> presum;
  int sum = 0, length = 0;

  for (int i = 0; i < a.size(); i++) {
    sum += a[i];

    if (sum == k) {
      length = max(length, i + 1);
    }

    long long rem = sum - k;
    if (presum.find(rem) != presum.end()) {
      int len = i - presum[rem];
      length = max(length, len);
    }
    if (presum.find(sum) == presum.end()) {
      presum[sum] = i;
    }
  }
  cout << length;
}

// Optimal...
// int longestSubArrayWithSumK(vector<int> a, long long k) {
//   int left = 0, right = 0;
//   long long sum = 0;
//   int maxLen = 0;
//   int n = a.size();
//   while (right < n) {
//     sum += a[right];
//
//     while (left <= right && sum > k) {
//       sum -= a[left];
//       left++;
//     }
//
//     if (sum == k) {
//       maxLen = max(maxLen, right - left + 1);
//     }
//     right++;
//   }
//   return maxLen;
// }
//
// int main() {
//   vector<int> a = {1, 2, 3, 1, 1, 1, 1, 3, 3};
//   long long k = 6;
//   int result = longestSubArrayWithSumK(a, k);
//   cout << result << endl;
// }
