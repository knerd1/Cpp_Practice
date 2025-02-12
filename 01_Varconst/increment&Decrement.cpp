#include <iostream>

using namespace std;

int main() {
  int a = 5;
  int b = 3;
  cout << "Result " << (a++ - b--) << endl;
  cout << a << endl;
  cout << b << endl;
}
