#include <iostream>
using namespace std;
int add(int a,int b){
int c=a+b;
return c;
}
int main(){
    int a,b;
 cout<< "enter the first no: "<<endl;
 cin>>a;
 cout<< "enter the second no: "<<endl;
 cin>>b;
 cout<<"Sum of both "<<add(a,b);
}
