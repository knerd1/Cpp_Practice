#include <iostream>

using namespace std;

int checkTemp (int temperature){
    return temperature;
}       

 void makeChai(){                                                       //  Declaring and definig the function   
     cout << "Boiling Water, Adding tea leaves......" << endl;
 }

void serveChai(int cups);                       // Declaring the function 

void serveChai(string teaype = "Green tea"){    //default parameter
    int cups = 987;                        // formal parameter
    cout << "serving "<< teaype << endl;
}
 
void serveChai(int cups ){                                 // Defining the function
    cout << cups << " cup of chai serving" << endl;
}

int main(){
   int temp = checkTemp(50);
   cout << temp << endl;
   makeChai();                       // Calling the function
   serveChai(68);                  // Actual parameter
    return 0;
}

