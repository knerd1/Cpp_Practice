#include <bits/stdc++.h>
#include <set>

using namespace std;

//Brute Force Approach
int arr[7] = {1, 2, 2, 3, 3, 3, 4};
set<int> st;
int main() {
  for (int i = 0; i < 7; i++) {
    st.insert(arr[i]);
  }
  int index = 0;
  for (auto it : st) {
    arr[index] = it;
    index++;
  }
  for (int i = 0; i < arr[index]; i++) {
    cout << arr[i] << endl;
  }
}
