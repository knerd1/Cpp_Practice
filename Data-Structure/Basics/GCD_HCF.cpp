#include <iostream>

using namespace std;

int main() {
  int a = 52, b = 10;
  while (a > 0 && b > 0) {
    if (a > b)
      a = a % b;
    else
      b = b % a;

    if (a == 0)
      cout << b;
    else
      cout << a;
  }
  return 0;
}
//
// int main() {
//   int n1 = 9, n2 = 12;
//   int gcd = 1;
//   for (int i = 1; i < n1; i++) {
//     if (n1 % i == 0 && n2 % i == 0)
//       gcd = i;
//   }
//   cout << gcd;
//   return 0;
// }
