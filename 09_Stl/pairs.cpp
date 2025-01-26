// We store can couple of integers in pairs

#include <iostream>
#include <utility>

using namespace std;

void pairDatatype() {
  pair<int, int> p = {1, 3}; // Syntax of pairs
  cout << p.first << " " << p.second << endl;

  // Nested properties of Pairs
  pair<int, pair<int, int>> abc = {1, {2, 5}};
  cout << abc.first << " " << abc.second.first << " " << abc.second.second
       << endl;

  // Pair Array
  pair<int, int> arr[] = {{1, 2}, {3, 9}, {4, 8}};
  cout << arr[2].second;
}

int main() { pairDatatype(); }
