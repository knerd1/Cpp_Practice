#include <iostream>

using namespace std;

int fac(int n) {
  if (n == 0)
    return 1;
  return n * fac(n - 1);
}

int main() {
  int n;
  cin >> n;
  int result = fac(n);
  cout << result;
}
