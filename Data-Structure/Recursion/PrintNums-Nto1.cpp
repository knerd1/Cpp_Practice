#include <iostream>

using namespace std;

// void printNums(int n) {
//   if (n < 1)
//     return;
//   cout << n << " ";
//   printNums(n - 1);
// }
//
void revnum(int n, int i = 1) {
  if (i > n)
    return;
  revnum(n, i + 1);
  cout << i << " ";
}

int main() {
  int n;
  cin >> n;
  revnum(n);
}
