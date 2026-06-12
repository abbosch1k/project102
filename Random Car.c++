#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string cars[4] = {
        "BMW",
        "Audi",
        "Tesla",
        "Toyota"
    };

    cout << cars[rand()%4];

    return 0;
}
