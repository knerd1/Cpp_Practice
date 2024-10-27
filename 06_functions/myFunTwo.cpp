#include <iostream>

using namespace std;

void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured Cups: " << cups << endl;
}

int main(){
    int chaiCups = 3;
    pourChai(chaiCups);                           //Call by values  
    cout << "Total cups of Chai " << chaiCups << endl;
    return 0;
}   