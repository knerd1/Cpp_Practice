#include <iostream>

using namespace std;

int main(){
    int cups;
    int membershipYears;
    cout << "Enter the numbers of cups you want to buy: " << endl;
    cin >> cups;
    cout << "Enter the total membership years: " << endl;
    cin >> membershipYears;
    if (cups > 12 || membershipYears > 1)
    {
        cout << "you are qualified for tea subscription discout" << endl;
    } else {
        cout << "you are not qualified for tea subscription discout " << endl;
    }
    return 0;
}