#include <iostream>

using namespace std;

int main(){
    float teaPrice = 299.99;
    int roundedTeaPrice = (int) teaPrice;
    cout << roundedTeaPrice << endl;

    int teaQuantity = 5;
    float totalTeaPrice = teaPrice * teaQuantity;
    cout << totalTeaPrice << endl;
    return 0;
}