#include <iostream>
#include <utility>

using namespace std;

// void rev(int a[], int l, int r) {
//   if (l >= r)
//     return;
//   swap(a[l], a[r]);
//   rev(a, l + 1, r - 1);
// }
//
// int main() {
//   int a[5];
//   for (int i = 0; i < 5; i++) {
//     cin >> a[i];
//   }
//   rev(a, 0, 4);
//   for (int i = 0; i < 5; i++) {
//     cout << a[i] << " ";
//   }
//   return 0;
// }
//
void reverse(int arr[], int n, int i) {
  if (i >= n)
    return;
  swap(arr[i], arr[n - i - 1]);
  reverse(arr, n, i + 1);
}

int main() {
  int arr[5] = {2, 4, 6, 8, 9};
  int n = sizeof(arr);
  reverse(arr, n, 0);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
