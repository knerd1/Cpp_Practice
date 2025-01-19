#include <cmath>
#include <iostream>

using namespace std;
// Bruteforce

// int main() {
//   int couter = 0;
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     if (n % i == 0)
//       couter++;
//   }
//   if (couter == 2) {
//     cout << "yes";
//   } else {
//     cout << "no";
//   }
//   return 0;
// }

int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 1; i < sqrt(n); i++) {
    if (n % i == 0) {
      count++;
      if ((n / i) != i) {
        count++;
      }
    }
  }
  if (count == 2) {
    cout << "Yes it is prime num";
  } else {
    cout << "NO";
  }
}
