#include <iostream>
#include <string>

using namespace std;

string s = "hello";

int main() {
  int left = 0;
  int right = s.size() - 1;
  while (left < right) {
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    left++;
    right--;
  }
  cout << s << endl;
}
