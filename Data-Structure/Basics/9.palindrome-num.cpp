#include <iostream>

using namespace std;

int ispalindrome(int n) {
  int dup = n;
  long revnum = 0;                 
  while (n > 0) {
    revnum = revnum * 10 + n % 10;
    n = n / 10;
  }
  if (dup == revnum)
    return true;
  else
    return false;
}

int main() {
  int n;
  cin >> n;
  int result = ispalindrome(n);
  cout << result;
}
