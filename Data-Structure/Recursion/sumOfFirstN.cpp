#include <iostream>

using namespace std;

// Using Parameterized way

// void sums(int i, int sum) {
//   if (i < 1) {
//     cout << sum;
//     return;
//   }
//   sums(i - 1, sum + i);
// }
//
// int maim() {
//   int n;
//   cin >> n;
//   sums(n, 0);
// }

// Using Recursive Functional way

int sums(int n) {
  if (n == 0)
    return 0;
  return n + sums(n - 1);
}

int main() {
  int n;
  cin >> n;
  int result = sums(n);
  cout << result;
}
