#include <iostream>
#include <vector>

using namespace std;

// Brute Force...

vector<int> v1 = {1, 2, 2, 3, 3, 4, 5, 6};
vector<int> v2 = {2, 3, 3, 5, 6, 6, 7};
int n = v1.size();
int m = v2.size();
vector<int> isa;
vector<int> visted = {0};

// int main() {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       if (v1[i] == v2[j] && visted[j] == 0) {
//         isa.push_back(v1[i]);
//         visted[j] = 1;
//         break;
//       }
//       if (v2[j] > v1[i])
//         break;
//     }
//   }
//   for (int i = 0; i < isa.size(); i++) {
//     cout << isa[i] << endl;
//   }
// }

// Optimal...

int i = 0;
int j = 0;

int main() {
  while (i < n && j < m) {
    if (v1[i] < v2[j]) {
      i++;
    } else if (v2[j] < v1[i]) {
      j++;
    } else {
      isa.push_back(v1[i]);
      i++;
      j++;
    }
  }
  for (auto it : isa) {
    cout << it << endl;
  }
}
