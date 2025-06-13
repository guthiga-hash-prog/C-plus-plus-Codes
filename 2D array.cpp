//A program that is 2D array using Macro that prompts the user to input the elements

#include <iostream>
#define ROWS 3
#define COLS 3

using namespace std;

int main() {
    int arr[ROWS][COLS];
    cout << "Enter " << ROWS * COLS << " elements for the 2D array (" << ROWS << " rows and " << COLS << " columns):\n";
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The elements in the 2D array are:\n";
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
