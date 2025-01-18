#include <algorithm>
#include <iostream>

using namespace std;
//
// int reverse(int x) {
//   int revnum = 0;
//   while (x > 0) {
//     int ld = x % 10;
//     revnum = (revnum * 10) + ld;
//     x = x / 10;
//   }
//   return revnum;
// }
//
// int main() {
//   int x;
//   cin >> x;
//  int result = reverse(x);
//  cout << result << endl;
// }
//

#include <climits>
int reverse(int x) {
  long revnum = 0;
  while (x) {
    revnum = revnum * 10 + x % 10;
    x = x / 10;
  }
  if (revnum > INT_MAX || revnum < INT_MIN)
    return 0;
  return int(revnum);
}
