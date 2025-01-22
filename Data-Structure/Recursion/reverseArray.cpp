#include <iostream>
#include <utility>

using namespace std;
void rev(int a[], int l, int r) {
  if (l >= r)
    return;
  swap(a[l], a[r]);
  rev(a, l + 1, r - 1);
}

int main() {
  int a[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  rev(a, 0, 4);
  for (int i = 0; i < 5; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
