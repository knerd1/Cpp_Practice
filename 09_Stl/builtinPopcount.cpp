// It shows how many set bits are there...

#include <iostream>

using namespace std;

int main() {
  int n = 7;
  int cnt = __builtin_popcount(n);
  cout << cnt << endl;

  long long num = 113232323422;
  int cnts = __builtin_popcountll(num);
  cout << cnts;
}
