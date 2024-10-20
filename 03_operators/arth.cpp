#include <iostream>

using namespace std;

int main(){
    int cup;
    double pricePerCup, totalPrice, discountedPrice;
    cout << "Enter the number of tea cups:";
    cin >> cup;
    cout << "Enter the price per cups:";
    cin >> pricePerCup;

    totalPrice = cup * pricePerCup;
    //now apply discout

    if (totalPrice>100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Total Price after discount is: " << discountedPrice << endl;
    }else{
        cout << "Total price is: " <<totalPrice << endl;
    }
    return 0;
}