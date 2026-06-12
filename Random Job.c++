#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string jobs[4] = {
        "Programmer",
        "Doctor",
        "Pilot",
        "Designer"
    };

    cout << jobs[rand()%4];

    return 0;
}
