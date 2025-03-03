#include <iostream>
using namespace std;
// int main(){
//     double x,y;
//     cout<<"Enter the value of x:" <<endl;
//     cin>>x;
//     cout<<"Enter the value of y:" <<endl;
//     cin>>y;
//  cout<<x+y<<endl;
// }

int main() {
    double fahrenheit;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) * (5.0 / 9.0);  // Use 5.0 / 9.0 to ensure floating-point division
    cout << "Temperature in Celsius: " << celsius << endl;
}

//