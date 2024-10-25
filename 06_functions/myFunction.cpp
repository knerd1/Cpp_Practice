#include <iostream>

using namespace std;

int checkTemp (int temperature){
    return temperature;
}       

void makeChai(){                                                       //  Declaring and definig the function   
    cout << "Boiling Water, Adding tea leaves......" << endl;
}

void serveChai(int cups);                       // Declaring the function 

int main(){
   int temp = checkTemp(50);
   cout << temp << endl;
   makeChai();                       // Calling the function
   serveChai(3);
    return 0;
}

void serveChai(int cups){                                 // Defining the function
    cout << cups << " cup of chai serving" << endl;
}