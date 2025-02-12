#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[6] = {1, 2, 2, 3, 3, 5};
  for (int i = 1; i < 6; i++) {
    if (arr[i] >= arr[i - 1]) {
    } else {
      cout << false << endl;
      return 0;
    }
  }
  cout << true << endl;
}
