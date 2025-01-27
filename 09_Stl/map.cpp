// Its store everything as "Key-Value" pair...
// Key can be any "Data-Type" also it must be unique...
// And key will be in sorted order...

#include <iostream>
#include <map>

using namespace std;

void mapUses() {
  // Declaration of map;
  map<int, int> mpp;             //{key(int),value(int)}
  map<int, pair<int, int>> maps; //{key(int),value(pair)}
  map<pair<int, int>, int> mps;  //{key(pair),value(int)}

  // Entering values in map
  mpp[1] = 2; //{1 is key and 2 is value}
  mpp.emplace(5, 8);
  maps.emplace(4, make_pair(10, 9));
  mps.insert({{11, 12}, 15});

  // Accessing elements of the map
  for (auto it : mpp) {
    cout << it.first << " " << it.second << endl;
  }
  cout << mpp[1]; // 1 is key and its value is 2 so it will print 2...
  auto its = mpp.find(5);
  cout << (its)->second;
}

int main() { mapUses(); }
