/*
MELISA MAISO
BSCIT-05-0080/2024
ONE DIMENSION ARRAY*/

#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization of a 1D array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing and displaying elements of the array
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    return 0;
}
