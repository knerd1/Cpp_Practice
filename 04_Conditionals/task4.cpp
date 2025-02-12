#include <iostream>

using namespace std;

int main(){
    int choice;
    double price;
    cout << "Select your tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Black Tea\n";
    cout << "3. Lemon Tea\n";
    cin >> choice;
    switch(choice){
        case 1:
            price = 2.0;
            cout << "You Selected Green Tea. Price: " << price << endl;
            break;  
        case 2:
            price = 3.0;
            cout << "You Selected Black Tea. Price: " << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You Selected lemon Tea. Price: " << price << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
    }
    return 0;
}