#include <iostream>
#include <vector>

using namespace std;

vector<int> vt = {1, 2, 3, 4};
int target = 6;

int main() {
  for (int i = 0; i < vt.size(); i++) {
    for (int j = i + 1; j < vt.size(); j++) {
      if (vt[i] + vt[j] == target) {
        cout << i << "," << j;
      }
    }
  }
}
