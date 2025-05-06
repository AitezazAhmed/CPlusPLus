#include <iostream>
using namespace std;

int findSum(int a, int b, int c) {
    return a + b + c;
}

int findSubtract(int a, int b, int c) {
    return a - b - c;
}

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int findMin(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a ;
    cout << "Enter value of b: ";
    cin >> b ;
    cout << "Enter value of c: ";
    cin >> c;
    int choice;
    cout << "1. Sum\n";
    cout << "2. Subtract\n";
    cout << "3. Max\n";
    cout << "4. Min\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Sum = " << findSum(a, b, c) << endl;
            break;
        case 2:
            cout << "Subtraction = " << findSubtract(a, b, c) << endl;
            break;
        case 3:
            cout << "Max = " << findMax(a, b, c) << endl;
            break;
        case 4:
            cout << "Min = " << findMin(a, b, c) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
