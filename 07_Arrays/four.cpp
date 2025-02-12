#include <iostream>

using namespace std;

int* preparedChaiOrders(int cups){
    int* orders = new int[cups];                 //new keyword will save refrences in dynamic memory
    for(int i = 0; i < cups; i++){
        orders[i]=(i+1)*10;
    }
    return orders;
}

int main(){
    int cups = 9;
    int* chaiOrder = preparedChaiOrders(cups);
    for(int i = 0; i < cups;i++){
        cout << chaiOrder[i] << " " << endl;
    }
    delete[] chaiOrder;                   //delete keyword will delete refrences from dynamic memory
    return 0;
}