#include <iostream>
using namespace std;

int main() {

    int hp;

    cin >> hp;

    if(hp < 30)
        cout << "Critical";
    else
        cout << "Alive";

    return 0;
}
