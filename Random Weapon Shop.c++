#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string item[4] = {
        "Sword",
        "Bow",
        "Axe",
        "Shield"
    };

    cout << item[rand()%4];

    return 0;
}
