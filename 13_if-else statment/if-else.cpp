#include <iostream>
using namespace std;
int main(){
    int Age;
    cout<<"Enter Your Age: ";
    cin>>Age;
    if(Age>150 || Age<4){
        cout<<"you are not valid";
    }
    else if (Age>=18)
    {
        cout<<"you can vote";
    }
    
    else{
        cout<<"you cannot vote";
    }
}