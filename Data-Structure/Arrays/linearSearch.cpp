#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int n) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == n)
      return i;
  }
  return -1;
}

int main() {
  int arr[7] = {1, 0, 4, 6, 8, 2, 4};
  int size = 7;
  int n = 4;
  linearSearch(arr, size, n);
}
