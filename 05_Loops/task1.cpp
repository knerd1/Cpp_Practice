#include <iostream>
#include <string>

using namespace std;

int main(){
    int teaCups;
    cout << "Enter the numbers of tea cups: " ;
    cin >> teaCups;

    while ( teaCups > 0)
    {
        cout << "serving a cup of tea and: \b" << teaCups << "remaining" <<endl;
        teaCups--;
    }
    cout << "All cups are served" << endl;
    return 0;
}