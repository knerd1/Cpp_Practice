#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>

using namespace std;

// Brute Force Approach...
pair<int, int> twoSum(vector<int> a, int t) {
  for (int i = 0; i < a.size(); i++) {
    for (int j = i + 1; j < a.size(); j++) {
      if (a[i] + a[j] == t) {
        return make_pair(i, j);
      }
    }
  }
  return make_pair(-1, -1);
}

int main() {
  vector<int> a = {2, 6, 5, 8, 11};
  int t = 14;
  pair<int, int> result = twoSum(a, t);
  cout << result.first << result.second << endl;
}

// Better Approach Hashing...
vector<int> vt = {2, 6, 5, 8, 11};
int t = 14;
map<int, int> mpp;

int main() {
  for (int i = 0; i < vt.size(); i++) {
    int a = vt[i];
    int more = t - a;
    if (mpp.find(more) != mpp.end()) {
      cout << mpp[more] << i;
    }
    mpp[a] = i;
  }
}

// Optimal...
vector<int> vt = {2, 6, 5, 8, 11};
int t = 14;

int main() {
  std::sort(vt.begin(), vt.end());
  int left = 0;
  int right = vt.size() - 1;

  while (left < right) {
    int sum = vt[left] + vt[right];
    if (sum == t) {
      cout << "found The target";
    } else if (sum < t)
      left++;
    else
      right--;
  }
  cout << "No";
}
