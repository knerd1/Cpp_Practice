#include <iostream>

using namespace std;

int main(){
    int teaBags;
    int AdditionalBags;
    cout << "Enter the number of tea bags:";
    cin >> teaBags;
    if (teaBags <= 10)
    {
        teaBags += 5;
    }
    cout << "Here is Your Total TeaBags: " << teaBags;
    return 0;
}