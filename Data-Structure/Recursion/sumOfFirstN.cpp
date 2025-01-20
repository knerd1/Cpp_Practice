#include <iostream>

using namespace std;

void sums(int i, int sum) {
  if (i < 1) {
    cout << sum;
    return;
  }
  sums(i - 1, sum + i);
}

int main() {
  int n;
  cin >> n;
  sums(n, 0);
}
