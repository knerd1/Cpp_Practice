#include <iostream>

using namespace std;

int main() {
  int animeEpsDates[3][5] = {
      {21, 28, 6, 11, 14}, {4, 7, 20, 12, 13}, {25, 27, 29, 1, 9}};

  for (int i = 0; i < 3; i++) {
    cout << "\n" << i + 1 << "st Anime Air Dates" << endl;
    for (int j = 0; j < 5; j++) {
      cout << animeEpsDates[i][j] << "," << endl;
    }
  };
  return 0;
}
