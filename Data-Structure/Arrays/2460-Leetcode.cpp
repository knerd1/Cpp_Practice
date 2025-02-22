#include <iostream>
#include <vector>
using namespace std;
std::vector<int> vt = {1, 2, 2, 1, 1, 0};

int main() {
  int a = -1;
  for (int i = 0; i < vt.size(); i++) {
    if (vt[i] == vt[i + 1]) {
      vt[i] = vt[i] * 2;
      vt[i + 1] = 0;
    }
  }
  for (int i = 0; i < vt.size(); i++) {
    if (vt[i] == 0) {
      a = i;
      break;
    }
  }
  if (a != 0) {
    for (int i = a + 1; i < vt.size(); i++) {
      if (vt[i] != 0) {
        swap(vt[i], vt[a]);
        a++;
      }
    }
  }
  for (auto it : vt) {
    cout << it << endl;
  }
}
