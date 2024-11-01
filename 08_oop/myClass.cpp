#include <iostream>
#include <vector>

using namespace std;\

class Chai{
    public:
         // Data Members (Attributes)
        string teaName;
        int servings;
        vector<string> ingredients;

         // member function
        void displayChaiDetails(){
           cout << "Tea Name: " << teaName << endl;
           cout << "Servings: " << servings << endl;
           cout << "Ingredients: ";
           for(string ingri : ingredients){
               cout << ingri << " ";
               }
            cout << endl;
            }
};

int main(){
    Chai chaiOne;

    chaiOne.teaName = "Lemon Tea";
    chaiOne.servings = 23;
    chaiOne.ingredients = {"water","Lemon","honey","sugar"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala tea";
    chaiTwo.servings = 22;
    chaiTwo.ingredients = {"water","Milk","Ginger","Masala"};

    chaiTwo.displayChaiDetails();
    return 0;
}