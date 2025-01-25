#include <algorithm>
#include <iostream>

using namespace std;

// Using Hashing...

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Prestoring The array;
  int hash[13] = {0};
  for (int i = 0; i < n; i++) {
    hash[arr[i]] += 1;
  }

  int q;
  cin >> q;
  while (q--) {
    int number;
    cin >> number;
    cout << hash[number] << " ";
  }
}

// void element(int number, int arr[], int size) {
//   int count = 0;
//   for (int i = 0; i < size; i++) {
//     if (arr[i] == number)
//       count = count + 1;
//   }
//   cout << count;
// }
//
// int main() {
//   int number;
//   cin >> number;
//   int arr[5] = {12, 15, 12, 16, 15};
//   int size = sizeof(arr);
//   element(number, arr, size);
// }
