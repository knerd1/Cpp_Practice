#include <iostream>

using namespace std;

int arr[5] = {7, 5, 7, 2, 1};

int main() {
  int largest = arr[0];
  int secondLargest = -1; // If any negative value present then use INT_MAIN;
  for (int i = 0; i < 5; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i];
    }
  }
  cout << secondLargest;
};
