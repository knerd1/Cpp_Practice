#include <iostream>

using namespace std;

int main(){
    int hours;
    cout << "Enter current hours (0-23): " << endl;
    cin >> hours;
    if (hours >= 8 && hours <= 18)
    {
        cout << "tea shop is oppend" << endl;
    } 
    else {
        cout << "tea shop is closed" << endl;
    }
    
    return 0;
}