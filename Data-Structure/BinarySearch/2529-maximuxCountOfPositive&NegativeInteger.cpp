#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {5, 20, 66, 1314};
int cnt1 = 0, cnt2 = 0;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > 0 && nums[i] != 0) {
      cnt1++;
    } else if (nums[i] < 0 && nums[i] != 0) {
      cnt2++;
    }
  }
  if (cnt1 > cnt2)
    cout << cnt1;
  else
    cout << cnt2;
}
