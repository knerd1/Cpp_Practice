#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     if (n % i == 0) {
//       cout << i << endl;
//     }
//   }
// }
//
void printDivisor(int n) {
  vector<int> ls;
  for (int i = 1; i < sqrt(n); i++) {
    if (n % i == 0) {
      ls.push_back(i);
      if ((n / i) != i) {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto it : ls)
    cout << it << " ";
}

int main() {
  int n;
  cin >> n;
  printDivisor(n);
  return 0;
}
