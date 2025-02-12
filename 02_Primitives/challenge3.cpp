#include <iostream>
#include <string>

using namespace std;

int main (){
    string favoriteTea;
    cout << "enter your favorite Tea: ";
    getline(cin,favoriteTea); '\n';
    string totalCupTea;
    cout << "enter total number of cup of:\n" << favoriteTea; 
    cin >> totalCupTea; '\n';
    cout << "Here is Your"  << favoriteTea << "with" << totalCupTea << "cups.";
    return 0;
}