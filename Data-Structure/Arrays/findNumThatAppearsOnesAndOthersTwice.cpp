#include <functional>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

// Brute Force...
vector<int> vt = {1, 1, 2, 3, 3, 4, 4};

int main() {
  for (int i = 0; i < vt.size(); i++) {
    int num = vt[i];
    int cnt = 0;
    for (int j = 0; j < vt.size(); j++) {
      if (vt[j] == num) {
        cnt++;
      }
    }
    if (cnt == 1) {
      cout << num;
    }
  }
}

// Better...
int main() {
  map<int, int> mpp;
  for (int i = 0; i < vt.size(); i++) {
    mpp[vt[i]]++;
  }
  for (auto it : mpp) {
    if (it.second == 1) {
      cout << it.first << endl;
    }
  }
}

// Optimal...
int xorr = 0;
int main() {
  for (int i = 0; i < vt.size(); i++) {
    xorr = xorr ^ vt[i];
  }
  cout << xorr;
}
