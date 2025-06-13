//A program that is 3D array using Macro that prompts the user to input the elements

#include <iostream>
#define DEPTH 3
#define ROWS 3
#define COLS 3

using namespace std;

int main() {
    int arr[DEPTH][ROWS][COLS];
    cout << "Enter " << DEPTH * ROWS * COLS << " elements for the 3D array (" << DEPTH << " depth, " << ROWS << " rows, and " << COLS << " columns):\n";
    for(int i = 0; i < DEPTH; i++) {
        for(int j = 0; j < ROWS; j++) {
            for(int k = 0; k < COLS; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "The elements in the 3D array are:\n";
    for(int i = 0; i < DEPTH; i++) {
        for(int j = 0; j < ROWS; j++) {
            for(int k = 0; k < COLS; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
