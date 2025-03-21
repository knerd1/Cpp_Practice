#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "anagram", t = "nagaram";
  if (s.length() != t.length())
    cout << false;
  int hash1[256] = {0};
  for (int i = 0; i < s.size(); i++) {
    hash1[s[i]]++;
  }
  int hash2[256] = {0};
  for (int i = 0; i < t.size(); i++) {
    hash2[t[i]]++;
  }
  for (int i = 0; i < 256; i++) {
    if (hash1[i] != hash2[i])
      cout << false;
  }
  cout << true;
}
