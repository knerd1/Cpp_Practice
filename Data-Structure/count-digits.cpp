#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  while (n > 0) {
    int lastnum = n % 10;
    count = count + 1;
    n = n / 10;
  }
  return count;
}

// Count numbers

// int count(int n) {
//   int cnt = (int)(log10(n) + 1);
//   return cnt;
// }
