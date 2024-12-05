#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

class anime {

private:
  int animeEps;
  string animeName;
  vector<string> animeGenres;

public:
  anime() {
    animeEps = 12;
    animeName = "One Punch Man";
    animeGenres = {"Action", "Thriller", "Drama"};
  } // Default Constructor

  anime(string aNames, int aEps, vector<string> aGenres) {
    animeEps = aEps;
    animeName = aNames;
    animeGenres = aGenres;
  } // Parameter Constructor

  // Getter for animeName
  string getAnimeName() { return animeName; }
  // Setter for animeName
  void setAnimeName(string name) { animeName = name; }

  // Getter for animeEps
  int getAnimeEps() { return animeEps; }
  // setter for animeEps
  void setAnimeEps(int episodes) { animeEps = episodes; }

  // Getter for animeGenres
  vector<string> getAnimeGenres() { return animeGenres; }
  // Setter for animeGenres
  void setAnimeGenres(vector<string> category) { animeGenres = category; }

  void animedetails() {
    cout << "Total episodes of Anime: " << animeEps << endl;
    cout << "Anime Name: " << animeName << endl;
    for (string animeCategory : animeGenres) {
      cout << animeCategory << ",";
    }
    cout << endl;
  }
};

int main() {
  anime Anime;
  Anime.setAnimeName("Full Metal");
  Anime.setAnimeEps(64);
  Anime.setAnimeGenres({"Story", "Romance", "Si-Fi"});
  Anime.animedetails();
  return 0;
}
