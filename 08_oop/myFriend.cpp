#include <iostream>
#include <string>
#include <vector>

using namespace std;

class anime {

private:
  string animeName;
  int animeEps;

public:
  anime(string name, int eps) : animeEps(eps), animeName(name) {}
  // or we can use this in the place of curly braces
  //  anime(int eps, string name) : animeEps(eps), animeName(name){}

  friend bool compareEps(const anime &anime1, const anime &anime2);

  void display() const { cout << "Anime Name: " << animeName << endl; }
};

bool compareEps(const anime &anime1, const anime &anime2) {
  return anime1.animeEps > anime2.animeEps;
};
int main() {
  anime onePunch("One Punch", 24);
  anime fullMetal("Full Metal", 64);

  fullMetal.display();
  onePunch.display();

  if (compareEps(onePunch, fullMetal)) {
    cout << "One Punch have MORE eps" << endl;
  } else {
    cout << "One punch have LESS eps" << endl;
  }
  return 0;
}
