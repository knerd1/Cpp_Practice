#include <iostream>
#include <string>

using namespace std;

int main(){
    string checkUser;
    int cupsCount;
    cout << "Enter your Status, are you student yes or no: " << endl;
    cin >> checkUser;
    cout << "Enter your purchased cup numbers: " << endl;
    cin >> cupsCount;

    if (checkUser == "yes" && cupsCount >= 15)
    {
        cout << "You are eligible for \"tea subscription discount\"";
    } else if (checkUser == "yes" || cupsCount >= 15)
    {
        cout << "You are eligible for \"tea subscription discount\"";
    } else {
        cout << "you are not eligible for this" << endl;
    }
    return 0;
}