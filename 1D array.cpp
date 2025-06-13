//A program that is 1D array using Macro where the user has to input the elements

#include <iostream>
#define SIZE 5

using namespace std;

int main() {
    int arr[SIZE];
    cout << "Enter " << SIZE << " elements:\n";
    for(int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "The elements in the array are:\n";
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
