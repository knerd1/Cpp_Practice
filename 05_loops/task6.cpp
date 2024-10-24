#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaType[5] = {"Oolong Tea","Orange Tea","Green Tea", "Black Tea", "Lemon Tea"};
    for (int i=0; i<5; i++){
        cout << "brewing  " << teaType[i] << "......" << endl;

        for (int j=1; j<=3; j++){
            cout << "Brewing " << j << " cup of " << teaType[i] << endl;
        }
    }

    return 0;
}