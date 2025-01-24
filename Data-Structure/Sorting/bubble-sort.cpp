#include <iostream>

using namespace std;

// void sorts() {
//   int arr[5] = {15, 16, 6, 8, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 0; j < n - 1 - i; j++) {
//       if (arr[j] > arr[j + 1]) {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }

// Optimized Bubble sort

void sort() {

  int arr[5] = {15, 16, 6, 8, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n - 1; i++) {
    bool swaped = false;
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swaped = true;
      }
    }
    if (swaped == false)
      break;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() { sort(); }
