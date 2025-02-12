#include <iostream>

using namespace std;

int main(){
    int teaCups;
    cout << "Enter the tea Cups: ";
    cin >> teaCups;

    for(int i = 1; i <=teaCups; i++){
        cout << "brewing cup " << i << " of tea" << endl;
    }
    cout << "outside of loop" << endl;
    return 0;
}