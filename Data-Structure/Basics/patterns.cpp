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

void pat6(int n) {
  for (int i = 1; i < n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void pat7(int n) {
  for (int i = 0; i < n; i++) {
    // For Space loop
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    // For star loop
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    // For space loop
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

void pat8(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
      cout << "*";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
}
// For pat9 = combine pat7 and pat8 it will give star diamond pattern

void pat10(int n) {
  for (int i = 1; i <= 2 * n - 1; i++) {
    int star = i;
    if (i > n)
      star = 2 * n - i;
    for (int j = 1; j <= star; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  pat10(n);
}
