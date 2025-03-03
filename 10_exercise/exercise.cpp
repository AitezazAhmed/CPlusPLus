#include <iostream>
#include <cmath> 
using namespace std;
// find the area of cicle with the radius
int main(){
    double radius;
    cout<<"Enter the radius of the circle"<< endl;
    cin>>radius;
    const double pi=3.14;
    double Area= pi*(pow(radius,2));
    cout<<"Area "<<Area<<endl;
}