#include <iostream>
using namespace std;
// horizontal row
// vertical column
int main() {
    int arr[3][3] = { {1, 2, 3}, 
                      {4, 5, 6}, 
                      {7, 8, 9} };

    // Accessing row-wise
    cout << "Row 1 elements: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[0][i] << " "; // Accessing first row
    }
    cout << endl;

    // Accessing column-wise
    cout << "Column 2 elements: ";
    for (int j = 0; j < 3; j++) {
        cout << arr[j][1] << " "; // Accessing second column
    }
    cout << endl;
    return 0;
}
