#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 9, 2, 1, 4, 7, 8};
int k = 3;

int main() {

  unordered_map<int, int> mpp;
  for (int i = 0; i < nums.size(); i++) { // Put everything in map...
    mpp[nums[i]]++;
  }

  vector<pair<int, int>> mppvec; // Now make pair type vector and
  for (auto it : mpp) {          // put that map key value pair in the vector
    mppvec.push_back({it.first, it.second});
  }

  sort(mppvec.begin(), mppvec.end(), // Sort by value descending...
       [](const pair<int, int> a, const pair<int, int> b) {
         return a.second > b.second;
       });

  vector<int> result;
  for (int i = 0; i < k && mppvec.size(); i++) {
    result.push_back(mppvec[i].first);
  }

  for (auto its : result) {
    cout << its << endl;
  }
}
