#include <iostream>

using namespace std;

int main(){
    int totalCups;
    double pricePerCup = 7, totalPrice, discountedPrice;
    cout << "Enter the numbers of cups you want: " << endl;
    cin >> totalCups;
    
    if (totalCups > 20)
    {
        totalPrice = (totalCups*pricePerCup);
        totalPrice -= (totalPrice * 0.2);
        cout << "Here is your final Price:" << totalPrice << endl;
    } else if (totalCups >= 10 && totalCups <= 20)
    {
       totalPrice = (totalCups*pricePerCup);
        totalPrice -= (totalPrice * 0.2);
        cout << "Here is your final Price:" << discountedPrice << endl; 
    } else
    {
        totalPrice = (totalCups*pricePerCup);
        cout << "Here is your final Price:" << totalPrice << endl; 
    }
    // totalPrice = totalCups * pricePerCup;
    // if (totalCups > 20) {
    //     discountedPrice = 0.2;
    // } else if (totalCups >= 10 && totalCups <=20)
    // {
    //     discountedPrice = 0.2;
    // } else {
    //     discountedPrice = 0;
    // }
    // totalPrice -= totalCups * discountedPrice;
    // cout << "Here is your final price: " << totalPrice << endl;
    return 0;
}