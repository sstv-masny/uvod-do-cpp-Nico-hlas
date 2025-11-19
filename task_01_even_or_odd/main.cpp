#include <iostream>
using namespace std;

int main() {
    int cislo;
    cout << "Vloz svoje cislo: ";
    cin >> cislo;
    if (cislo % 2 == 0) {
        cout << "Cislo je párne";
    } else
        cout << "Cislo je neparne";

    return 0;
}