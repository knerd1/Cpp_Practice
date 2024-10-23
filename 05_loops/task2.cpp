#include <iostream>
#include <string>

using namespace std;

int main(){
    string response;
    do
    {
        cout << "You want more tea (yes/no): " << endl;
        getline (cin,response);
    } while (response == "yes");
    
    return 0;
}