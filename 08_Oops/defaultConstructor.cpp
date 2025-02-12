#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

class chai {
public:
  string teaName;
  int servings;
  vector<string> ingridients;

  chai() {
    teaName = "Milk Tea";
    servings = 1;
    ingridients = {"Milk", "Water", "Tea leaf"};
    cout << "construstor Called" << endl;
  } // Default construstor

  void displayChaiDetails() {
    cout << teaName << ": Tea Name" << endl;
    cout << servings << ": Total servings" << endl;
    cout << "ingridients: ";
    for (string ingridient : ingridients) { // accessing vector
      cout << "\n" << ingridient;
    }
    cout << endl;
  }
};

int main() {
  chai chaiDetails; // making object,,When creating object at this time
                    // construstor will call

  // chaiDetails.teaName = "Lemon Tea";
  // chaiDetails.servings = 22;
  // chaiDetails.ingridients = {"Lemon", "Water", "Lemontea",};

  chaiDetails.displayChaiDetails();
  return 0;
}
