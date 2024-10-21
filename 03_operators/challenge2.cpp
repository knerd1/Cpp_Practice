#include <iostream>

using namespace std;

int main(){
    int totalTeaBags;
    cout << "Enter the number of tea bags: " << endl;
    cin >> totalTeaBags;
    if (totalTeaBags < 20)
    {
        totalTeaBags += 10;
        cout << "Here is your updated tea bags: " << totalTeaBags << endl;
    } else {
        cout << "Here is your updated tea bags: " << totalTeaBags << endl;
    }
    return 0;
}