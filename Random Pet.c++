#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string pets[4] = {
        "Cat","Dog","Rabbit","Parrot"
    };

    cout << pets[rand()%4];

    return 0;
}
