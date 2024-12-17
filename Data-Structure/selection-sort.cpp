#include <algorithm>
#include <iostream>

using namespace std;
void sorts() {
  int arr[6] = {9, 5, 8, 2, 10, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " " << endl;
  }
}

int main() {
  sorts();
  return 0;
}
