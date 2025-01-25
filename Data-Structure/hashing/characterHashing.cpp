#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  // Pre storing
  int hash[256] = {0}; // ascii char codes
  for (int i = 0; i < s.size(); i++) {
    hash[s[i]]++;
  }

  int q;
  cin >> q;
  while (q--) {
    char ch;
    cin >> ch;

    // Fetch
    cout << hash[ch] << endl;
  }
}

// void charcter(char ch, string s, int size) {
//   int count = 0;
//   for (int i = 0; i < size; i++) {
//     if (s[i] == ch)
//       count += 1;
//   }
//   cout << count;
// }
//
// int main() {
//   char ch;
//   cin >> ch;
//   string s = "helloboyss";
//   int size = s.length();
//   charcter(ch, s, size);
// }
