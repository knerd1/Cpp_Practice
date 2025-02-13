#include <iostream>

using namespace std;

int arr[6] = {1, 3, 2, 5, 9, 4};

int main() {
  int temp = arr[0];
  for (int i = 1; i < 6; i++) {
    arr[i - 1] = arr[i];
  }
  arr[5] = temp;
  for(int i =0; i<6; i++){
    cout << arr[i] << endl;
  }
}
