#include <iostream>
#include <string>
#include <vector>

using namespace std;

class movie {
public:
  int year;
  string genre;
  vector<string> names;

  // delegation constructor
  movie(string movieGenre)
      : movie(2012, movieGenre, {"hellbound", "Money-heist", "the coward"}) {}

  // Main constructor
  movie(int movieYear, string movieGenre, vector<string> movieNames) {
    year = movieYear;
    genre = movieGenre;
    names = movieNames;

    cout << "Main constructor called!" << endl;
  }

  void showMovieDetails() {
    cout << "Movie releasing year: " << year << endl;
    cout << "Movie Genre: " << genre << endl;
    for (string movieTitle : names) {
      cout << "Movie Name: " << movieTitle << endl;
    }
    cout << endl;
  }
};

int main() {
  movie movieData("bollywood");
  movieData.showMovieDetails();
}
