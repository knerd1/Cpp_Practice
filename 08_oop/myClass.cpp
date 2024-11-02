#include <iostream>
#include <vector>

using namespace std;

class games{
    public:
        string gameName;
        int gamePrice;
        vector<string> category;

        void gamesDetails(){
            cout << "Game Name: " << gameName << endl;
            cout << "Price of Game: " << gamePrice << endl;
            cout << "Category: " ;
            for(string gamecatelog : category){
                cout << gamecatelog << " ";
            }
            cout << endl;
        }
};

int main(){
    games gameOne;

    gameOne.gameName = "The Witcher";
    gameOne.gamePrice = 1564;
    gameOne.category = {"RPG","Action","Story"};

    gameOne.gamesDetails();

    games gameTwo;

    gameTwo.gameName = "Red Dead Redemption";
    gameTwo.gamePrice = 2231;
    gameTwo.category = {"Thriller","Action","Shotting"};

    gameTwo.gamesDetails();
}