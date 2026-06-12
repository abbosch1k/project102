#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string food[4] = {
        "Burger",
        "Pizza",
        "Kebab",
        "Hotdog"
    };

    cout << food[rand()%4];

    return 0;
}
