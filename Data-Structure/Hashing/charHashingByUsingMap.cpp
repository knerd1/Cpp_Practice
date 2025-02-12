#include <iostream>
#include <map>

using namespace std;

int main() {
  string sss;
  cin >> sss;
  map<char, int> mpps;

  for (int i = 0; i < sss.size(); i++) {
    mpps[sss[i]]++;
  }
  int q;
  cin >> q;

  while (q--) {
    char cmhs;
    cin >> cmhs;
    cout << mpps[cmhs] << endl;
  }
  return 0;
}
