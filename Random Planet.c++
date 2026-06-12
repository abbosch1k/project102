#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string planets[4] = {
        "Mars",
        "Earth",
        "Venus",
        "Jupiter"
    };

    cout << planets[rand()%4];

    return 0;
}
