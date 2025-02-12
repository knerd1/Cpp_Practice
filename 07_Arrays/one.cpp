#include <iostream>

using namespace std;

int main(){
    int chaiTemp[5] = {32, 44, 21, 34, 54};
    cout << "Chai Temperature: " << endl;

    for(int i =0; i < 5; i++){
        cout << chaiTemp[i] << " degree\n";
    }
    return 0;
}