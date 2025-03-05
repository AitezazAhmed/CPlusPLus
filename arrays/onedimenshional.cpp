#include <iostream>
using namespace std;
main(){
    int marks[6];
    for ( int i = 0; i < 6; i++)
    {
    cout<<"enter the marks of "<<i<<" student:";
     cin>>marks[i];
    
    }  
    for ( int i = 0; i < 6; i++)
    {
        cout<<"Makrs of "<<i<<"nth Student is: "<<marks[i]<<endl;
    }
    
}