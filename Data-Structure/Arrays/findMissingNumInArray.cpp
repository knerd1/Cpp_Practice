#include <iostream>

using namespace std;

void checknum(int arr[], int n, int m) {
  for (int i = 0; i < m; i++) {
    int flag = 0;
    for (int j = 0; j < n - 1; j++) {
      if (arr[j] == i) {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      cout << i;
  }
}

int main() {
  int m;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  checknum(arr, m, n);
}
