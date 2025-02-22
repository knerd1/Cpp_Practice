#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

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
  vector<int> vt = {2, 3, 5, 1, 9};
  long long K = 10;
  int len = getLongestSubarray(vt, K);
  cout << len << endl;
}
