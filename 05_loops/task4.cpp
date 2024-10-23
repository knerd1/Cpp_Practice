#include <iostream>
#include <string>

using namespace std;

int main(){
    string response;
    while (true)
    {
        cout << "Do you want more tea (type \"stop\" to exit) ";
        cin >> response;

        if (response == "stop")
        {
            break;
        } else {
            cout << "here is your another cup of tea \n" ;
        }
    }
    cout << "no more tea";
    return 0;   
}