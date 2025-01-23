#include <iostream>

using namespace std;

bool stringPalindrome(string word, int n, int i) {
  if (i >= n / 2)
    return true;
  if (word[i] != word[n - i - 1])
    return false;
  return stringPalindrome(word, n, i + 1);
}

int main() {
  string word = "madam madam";
  bool isPalindrome = stringPalindrome(word, word.length(), 0);
  cout << isPalindrome;
}
