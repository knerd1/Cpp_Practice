#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string input = "my name is maanish";
  string ans = "";
  string word = "";

  for (auto it : input) {
    if (it == ' ') {
      reverse(word.begin(), word.end());
      ans += word + " ";
      word = "";
    } else {
      word += it;
    }
  }
  reverse(word.begin(), word.end());
  ans += word;
}
