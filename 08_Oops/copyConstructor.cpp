#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Anime {

public:
  int totalAnime;
  string *animeCategory;
  vector<string> animeNames;

  // Parameter Constructor
  Anime(int total, string catelog, vector<string> names) {
    totalAnime = total;
    animeCategory = new string(catelog);
    animeNames = names;
    cout << "Parameter Consturctor Called" << endl;
  }

  // Syntax of copy constructor
  Anime(const Anime &other) {
    totalAnime = other.totalAnime;
    animeCategory = new string(*other.animeCategory);
    animeNames = other.animeNames;
    cout << "Copy Consturctor Called" << endl;
  }

  // Destructor
  ~Anime() {
    delete animeCategory;
    cout << "Destructor Called" << endl;
  }

  void animeDetails() {
    cout << totalAnime << ": Anime count" << endl;
    cout << *animeCategory << ": Anime Category" << endl;
    cout << "Anime Names: ";
    for (string animeName : animeNames) {
      cout << animeName << ", ";
    }
    cout << endl;
  }
};

int main() {
  Anime animeShows(3, "Action", {"One-piece", "Naruto", "Bleech"});
  // animeShows.animeDetails();

  // copy the object (from Constructor)
  Anime copiedAnimeShows = animeShows; // both objects have seperate data
  // copiedAnimeShows.animeDetails();

  *animeShows.animeCategory = "SC-FI";

  animeShows.animeDetails();
  copiedAnimeShows.animeDetails();

  return 0;
}
