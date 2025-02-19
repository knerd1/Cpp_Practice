#include <iostream>

using namespace std;

// Brute Force...
int main() {
  int arr[4] = {1, 2, 3, 6};
  int n = 9;
  for (int i = 1; i <= 9; i++) {
    bool flag = 0;
    for (int j = 0; j < 4; j++) {
      if (arr[j] == i) {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      cout << i;
  }
}

// Better Approach...(Hashing)...
int main() {
  int arr[4] = {1, 2, 3, 5};
  int n = 9;                    // Search num between 1 to 5...
  int hash[10] = {0};           // Create Hash array with 0...
  for (int i = 0; i < 4; i++) { // Now iterate through Array and mark in hash
                                // Array which one is Found as 1...
    hash[arr[i]] = 1;
  }
  for (int i = 0; i <= 9; i++) { // Now iterate in hash Array and check which
                                 // one is 0 & That element would be Missing

    if (hash[i] == 0) {
      cout << i << endl;
    }
  }
}

// Optimal...(1st)
int main() {
  int arr[4] = {1, 2, 3, 5};
  int n = 5;

  int sum = n * (n + 1) / 2; // Get sum of all 1 to 5 nums = 15...

  int s2 = 0; // Now Get Sum of Array...1+2+3+5 = 11...
  for (int i = 0; i < 4; i++) {
    s2 += arr[i];
  }
  cout << sum - s2; // 15-11 = 4
}
