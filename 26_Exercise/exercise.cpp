#include <iostream>
using namespace std;
int main(){
    int marks,count=0,total=0;
  
    while (true)
    {
        cout<<"Enter your marks: ";
        cin>>marks;
        if(marks==0){
            break;
        }
        total+=marks;
        count++;
    }
   double percentage = total / (count * 100) * 100;
    cout<<percentage;
}