#include <iostream>
#include <iterator>
#include <set>
#include <vector>

using namespace std;

// Brute Force Approach...

// int arr1[6] = {1, 1, 2, 3, 4, 5};
// int arr2[5] = {2, 3, 4, 5, 6};
//
// int main() {
//   set<int> st;
//   for (int i = 0; i < 6; i++) {
//     st.emplace(arr1[i]);
//   }
//   for (int i = 0; i < 5; i++) {
//     st.emplace(arr2[i]);
//   }
//
//   for (auto it : st) {
//     cout << it << endl;
//   }
// }

// Optimal...

vector<int> a = {1, 1, 2, 3, 4, 5};
vector<int> b = {2, 3, 4, 4, 5, 6};
int i = 0;
int j = 0;
vector<int> un;

int main() {
  while (i < a.size() && j < b.size()) {
    if (a[i] <= b[i]) {
      if (un.size() == 0 || un.back() != a[i])
        un.push_back(a[i]);
      i++;
    } else {
      if (un.size() == 0 || un.back() != b[j])
        un.push_back(b[j]);
      j++;
    }
  }
  while (i < a.size()) {
    if (un.size() == 0 || un.back() != a[i])
      un.push_back(a[i]);
    i++;
  }

  while (j < b.size()) {
    if (un.size() == 0 || un.back() != a[j])
      un.push_back(a[j]);
    j++;
  }

  for (int i = 0; i < un.size(); i++) {
    cout << un[i] << endl;
    ;
  }
}
