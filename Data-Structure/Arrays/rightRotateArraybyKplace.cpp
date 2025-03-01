#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vt = {1, 2, 3, 4, 5};
  int k = 2;

  k = k % vt.size();
  reverse(vt.begin(), vt.end());
  reverse(vt.begin(), vt.begin() + k);
  reverse(vt.begin() + k, vt.end());

  for(auto it : vt){
    cout << it << endl;
  }
}
