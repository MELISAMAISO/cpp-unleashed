/*
MELISA MAISO
BSCIT-05-0080/2024
TWO DIMENSION ARRAY*/

#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization of a 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing and displaying elements
    for (int i = 0; i < 2; i++) {      // Loop for rows
        for (int j = 0; j < 3; j++) {  // Loop for columns
            cout << "Element at [" << i << "][" << j << "] = " << matrix[i][j] << endl;
        }
    }

    return 0;
}
