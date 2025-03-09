#include <iostream>
using namespace std;
main(){
int a=50;
 int *ptra;    // we can store add in this ptr which we required like we required a addreaa so ptra
 ptra=&a; // storing address
 cout<<"The value of a is "<<*ptra<<endl;   // *ptra show the value of the at this adress
 cout<<"The value of a is "<<a<<endl;
 cout<<"The address of value a is "<<ptra<<endl;  // ptra show the adress of a
 cout<<"The address of value a is "<<&a<<endl;
}