#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaType;
    cout << "Enter the choice of your tea: " << endl;
    getline(cin, teaType);
    if (teaType == "Green Tea")
    {
        cout << "Your order has been confirmed" << endl;
    };
    return 0;
}