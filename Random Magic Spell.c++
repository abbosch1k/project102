#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string spells[4] = {
        "Fireball",
        "Ice Blast",
        "Thunder",
        "Heal"
    };

    cout << spells[rand()%4];

    return 0;
}
