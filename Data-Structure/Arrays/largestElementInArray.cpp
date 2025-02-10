#include <iostream>

using namespace std;
int arr[6] = {1, 34, 5, 78, 5, 2};
int main() {
  int larger = arr[0];
  for (int i = 0; i < 6; i++) {
    if (arr[i] > larger) {
      larger = arr[i];
    }
  }
  cout << larger << endl;
}
