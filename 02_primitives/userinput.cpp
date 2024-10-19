#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaName;
    int teaQuantity;

    cout << "which tea you want to order \n";
    getline(cin,teaName);

    cout << "And how many cup of" << teaName << "you want?";
    cin >> teaQuantity;

    cout << teaName;
    cout << teaQuantity;
    }