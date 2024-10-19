#include <iostream>
#include <string>

using namespace std;

int main(){
    float teaPrice;
    cout << "Enter the base price of tea:";
    cin >> teaPrice;
    int priceWithTax = (int) teaPrice * 1.1;
    cout << priceWithTax; '\n';
    return 0;
}