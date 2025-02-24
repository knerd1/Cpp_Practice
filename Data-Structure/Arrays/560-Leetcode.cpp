#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int subarraySum(vector<int> a, int k) {
  unordered_map<int, int> presum;
  presum[0] = 1;
  int count = 0, currsum = 0;
  for (auto it : a) {
    currsum += it;
    if (presum.find(currsum - k) != presum.end()) {
      count += presum[currsum - k];
    }
    presum[currsum]++;
  }
  return count;
}

int main() {
  vector<int> a = {1, 2, 3, 1, 1, 1, 1, 3, 3};
  int k = 6;
  int result = subarraySum(a, k);
  cout << result << endl;
}
