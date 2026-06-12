#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    string names[4] = {
        "Shadow",
        "Ghost",
        "Nova",
        "Blaze"
    };

    cout << names[rand()%4]
         << rand()%999;

    return 0;
}
