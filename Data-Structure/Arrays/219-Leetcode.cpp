#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
vector<int> nums = {1, 2, 3, 1};
int k = 3;
unordered_map<int, int> mp;
int main() {
  for (int i = 0; i < nums.size(); i++) {
    if (mp.find(nums[i]) != mp.end() && abs(i - mp[nums[i]]) <= k)
      cout << true;
    mp[nums[i]] = i;
  }
  cout << false;
}
