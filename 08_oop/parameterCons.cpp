#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Anime {

public:
  int totalAnime;
  string animeCategory;
  vector<string> animeNames;

  // Parameter Consturctor
  Anime(int total, string catelog, vector<string> names) {
    totalAnime = total;
    animeCategory = catelog;
    animeNames = names;
    cout << "Parameter Consturctor Called" << endl;
  }

  void animeDetails() {
    cout << totalAnime << ": Anime count" << endl;
    cout << animeCategory << ": Anime Cateory" << endl;
    for (string animeName : animeNames) {
      cout << animeName << ", ";
    }
    cout << endl;
  }
};

int main() {
  Anime animeShows(3, "Action", {"One-piece", "Naruto", "Bleech"});
  animeShows.animeDetails();

  Anime copiedAnime = animeShows;
  copiedAnime.animeDetails();

  return 0;
}
