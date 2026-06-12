#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string boss[3] = {
        "Dragon",
        "Titan",
        "Demon"
    };

    cout << boss[rand()%3];

    return 0;
}
