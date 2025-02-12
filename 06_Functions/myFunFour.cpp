#include <iostream>
// lamda function
// auto VAR_NAME = [](){};

using namespace std;

int main(){
    auto preparedChai = [](int cups){
        cout << "preparing: " << cups << " Cups of tea" << endl;
    };
    preparedChai(32);
    return 0;
}