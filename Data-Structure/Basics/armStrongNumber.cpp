#include <iostream>

using namespace std;

bool armstrong(int n) {
  int dup = n;
  long long sum = 0;
  while (n > 0) {
    int ld = n % 10;
    sum = sum + (ld * ld * ld);
    n = n / 10;
  }
  return sum == dup;
}

int main() {
  int n;
  cin >> n;
  if (armstrong(n)) {
    cout << "yes";
  } else {
    cout << "no";
  }
  return 0;
}

// For 3 Nums
