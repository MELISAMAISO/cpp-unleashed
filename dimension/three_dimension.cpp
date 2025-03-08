/*
MELISA MAISO
BSCIT-05-0080/2024
THREE DIMENSION ARRAY*/

#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization of a 3D array
    int cube[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Accessing and displaying elements
    for (int i = 0; i < 2; i++) {         // Loop for layers
        for (int j = 0; j < 3; j++) {     // Loop for rows
            for (int k = 0; k < 4; k++) { // Loop for columns
                cout << "cube[" << i << "][" << j << "][" << k << "] = " << cube[i][j][k] << endl;
            }
        }
    }

    return 0;
}
