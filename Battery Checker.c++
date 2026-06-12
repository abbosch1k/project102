#include <iostream>
using namespace std;

int main() {

    int battery;

    cin >> battery;

    if(battery < 20)
        cout << "Charge Now";
    else
        cout << "Battery OK";

    return 0;
}
