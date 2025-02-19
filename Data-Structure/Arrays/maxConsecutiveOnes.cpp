#include <iostream>
#include <vector>

using namespace std;

vector<int> vt = {1, 1, 0, 1, 1, 1, 0, 1, 1};

int main() {
  int maxi = 0;
  int count = 0;
  for (int i = 0; i < vt.size(); i++) {
    if (vt[i] == 1) {
      count++;
      maxi = max(maxi, count);
    } else
      count = 0;
  }
  cout << maxi;
}
