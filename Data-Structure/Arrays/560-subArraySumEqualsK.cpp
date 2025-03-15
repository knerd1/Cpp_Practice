#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> nums = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
int sumK = 3;

// Brute Force...

int cnt = 0;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i; j < nums.size(); j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum = sum + nums[k];
      }
      if (sum == sumK)
        cnt++;
    }
  }
  cout << cnt << endl;
}

// Better...

int cnt = 0;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    int sum = 0;
    for (int j = i; j < nums.size(); j++) {
      sum += nums[j];
      if (sum == sumK)
        cnt++;
    }
  }
  cout << cnt << endl;
}

// Optimal...(Prefix Sum)...

unordered_map<int, int> mpp;
int main() {
  mpp[0] = 1;
  int preSum = 0, count = 0;
  for (int i = 0; i < nums.size(); i++) {
    preSum += nums[i];
    int remove = preSum - sumK;
    count += mpp[remove];
    mpp[preSum] += 1;
  }
  cout << count << endl;
}
