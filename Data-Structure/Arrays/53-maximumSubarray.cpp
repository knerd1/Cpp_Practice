#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

int main() {
  int maxi = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i; j < nums.size(); j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += nums[k];
        maxi = max(sum, maxi);
      }
    }
  }
  cout << maxi << endl;
}

// Better...

int main() {
  int maxi = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    int sum = 0;
    for (int j = i; j < nums.size(); j++) {
      sum += nums[j];
      maxi = max(maxi, sum);
    }
  }
  cout << maxi;
}

// Optimal..(Kadane Algo)...
int main() {
  long long sum = 0;
  long long maxi = LONG_MIN;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    if (sum > maxi) {
      maxi = sum;
    }
    if (sum < 0) {
      sum = 0;
    }
  }
  if (maxi < 0) {
    maxi = 0;
  }
  cout << maxi;
}
