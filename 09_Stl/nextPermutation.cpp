// Print All permutation of the stings...

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  string s = "123";
  string ss = "231";
  sort(ss.begin(), ss.end()); // Always start from sorted order
  do {
    cout << ss << endl;
  } while (next_permutation(
      ss.begin(),
      ss.end())); // Right after all combinations it will return false;

  int maxi = *max_element(a, a + n);
}
