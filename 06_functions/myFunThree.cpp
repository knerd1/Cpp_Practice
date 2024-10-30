#include <iostream>

using namespace std;

void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured Cups: " << cups << endl;
}

int main(){
    int chai = 3;
    pourChai(chai);                            
    cout << "Total cups of Chai " << chai << endl;
    return 0;
}   