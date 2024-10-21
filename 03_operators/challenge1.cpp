#include <iostream>

using namespace std;

int main() {
    int totalTeaPacks;
    double teaPackPrice, finalPrice;
    
    cout << "Enter the total tea packs: ";
    cin >> totalTeaPacks;

    cout << "Enter the price of tea pack: ";
    cin >> teaPackPrice;
    
    double subtotal = totalTeaPacks * teaPackPrice;
    double tax = subtotal * 0.1;
    finalPrice = subtotal + tax;
    
    cout << "This is your final price after tax: " << finalPrice << endl;
    return 0;
}