#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaType[4] = {"Oolong Tea","Green Tea", "Black Tea", "Lemon Tea"};

    for( int i=0; i<4; i++){
        if (teaType[i]=="Green Tea")
        {
            cout << "skippig " << teaType[i] << endl;
            continue;
        }
        
        cout << "Brewing " << teaType[i] << "...." << endl;
        return 0;
    }
}