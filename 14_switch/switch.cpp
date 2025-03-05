#include <iostream>
using namespace std;
int main(){
    int Age;
    cout<<"Enter Your Age: ";
    cin>>Age;
    switch (Age)
    {
    case 18:
        cout<<"you are 18 year old";
        break;
    case 30:
        cout<<"you are 30 year old";
        break;
    case 50:
        cout<<"you are 50 year old";
        break;
    case 100:
        cout<<"you are 100 year old";
        break;
    default:
    cout<<"you are not 18,30,50 and 100 year old";
        break;
    }
}