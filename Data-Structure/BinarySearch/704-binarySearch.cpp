#include <iostream>
#include <vector>

using namespace std;

vector<int> nums = {-1, 0, 3, 5, 9, 12};
int target = 9;

int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == target) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
