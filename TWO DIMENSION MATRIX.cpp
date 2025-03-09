NAME;MERCY NKATHA
BSCIT-05-0047\2024


#include <iostream>
using namespace std;

int main() {
    // 2D Matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements
    cout << matrix[0][1] << endl; // Output: 2

    // Iterating over the matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
