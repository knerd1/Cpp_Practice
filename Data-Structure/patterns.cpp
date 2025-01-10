#include <iostream>
#include <ostream>

using namespace std;

void pat1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void pat3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pat4(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void pat5(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  pat5(n);
}
