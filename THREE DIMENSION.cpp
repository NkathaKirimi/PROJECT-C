NAME;MERCY NKATHA
BSCIT-05-0047\2024


#include <iostream>
using namespace std;

int main() {
    // 3D Matrix: 2 layers, 2 rows, 3 columns
    int matrix[2][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        }
    };

    // Accessing an element
    cout << matrix[1][0][2] << endl; // Output: 9

    // Iterating over a 3D matrix
    for(int i = 0; i < 2; i++) {
        cout << "Layer " << i << ":" << endl;
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 3; k++) {
                cout << matrix[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
