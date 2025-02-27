#include <iostream>
#include <vector>

using namespace std;
// Brute Force == Any sorting...

// Better Approach...

vector<int> nums = {1, 0, 2, 0, 1, 2, 0, 1, 1, 0};

// int main() {
//   int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//   for (int i = 0; i < nums.size(); i++) {
//     if (nums[i] == 0)
//       cnt0++;
//     else if (nums[i] == 1)
//       cnt1++;
//     else
//       cnt2++;
//     for (int i = 0; i < cnt0; i++)
//       nums[i] = 0;
//     for (int i = cnt0; i < cnt0 + cnt1; i++)
//       nums[i] = 1;
//     for (int i = cnt0 + cnt1; i < nums.size(); i++)
//       nums[i] = 2;
//     for (auto it : nums) {
//       cout << it << endl;
//     }
//   }
// }

// Optimal Approach...`Dutch national Flag Algo`
