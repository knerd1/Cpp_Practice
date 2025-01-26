// Vectors are dynamic and we can modify the size of vector whenever we want
// unlike array

#include <iostream>
#include <vector>

using namespace std;

void vectorUses() {
  vector<int>
      v; // Syntax of vector (int or double or long or char or string etc...)

  v.push_back(1);    // It create empty container and push 1 from back...
  v.emplace_back(2); // It increase size of container and insert from back...

  vector<pair<int, int>> vp; // Creating vector Type pair
  vp.push_back({1, 2});      // In pairs the difference between push_back and
  vp.emplace_back(4, 5); // emplace_back is we don't need {} this for emplace

  vector<int> vec(5, 100); // This means 5 is size of container with 5 instance
                           // of 100 like {100,100,100,100,100}

  vector<int> vect(5); // This means 5 is size of container with 5 instance
                       //  of 0 or with any garbage value

  // Copy one vector into another vector
  vector<int> v1(5, 20);
  vector<int> v2(v1);

  //  Access element in vector
  for (auto it : v) {
    cout << it << " " << endl;
  }

  vector<int>::iterator its = v.begin(); // Using iterators
  // its++;
  cout << *its << " ";
  its = its + 1;
  cout << *its << " ";
}

int main() { vectorUses(); }
