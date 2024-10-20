#include <iostream>

using namespace std;

int main(){
    int cups;
    cout << "Enter the number of cups you want to buy: " << endl;
    cin >> cups;
    if(cups>20){
        cout << "You have earned a \'GOLD\' badge" << endl;
    } else if (cups >= 10 && cups <= 20)
    {
        cout << "You have earned a \'SILVER\' badge" << endl;
    } else {
        cout << "You have earned \'NOTHING\'" << endl;
    }
    return 0;
}