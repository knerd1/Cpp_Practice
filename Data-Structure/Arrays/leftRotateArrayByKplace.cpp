#include <algorithm>
#include <iostream>

using namespace std;

void leftRotate(int arr[], int n, int k) {
  // Brute-Force Approach...

  // If Rotation exceeds...
  k = k % n;

  // Step 1: take First k elements and put into temp...
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }

  // Step 2: now shift remaining elements...
  for (int i = k; i < n; i++) {
    arr[i - k] = arr[i];
  }

  // Step 3: put back temp into array...
  for (int i = n - k; i < n; i++) {
    arr[i] = temp[i - (n - k)];
  }

  // Optimal Approach...
  reverse(arr, arr + k);
  reverse(arr + k, arr + n);
  reverse(arr, arr + n);
}

int main() {
  int arr[6] = {2, 3, 42, 12, 3, 1};
  int n = 6;
  int k = 3;
  leftRotate(arr, n, k);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}
