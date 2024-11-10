#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;
}

int main(){
    int chaiServed[8] ={12,32,45,87,31,3,23,96};
    int total = totalChaiServed(chaiServed, 8);
    cout << total;
    return 0;
}