#include <iostream>
using namespace std;

// Priority
//1) * and /
//2) + and -
//3) if we use prenthesis then we change the priority () this is prenthesis

int main(){
   int x=1 +2 *3;
   cout << x<< endl; // answer is 7 bcz first multipy and then add
}

// Exercise
// int main(){
//   double x =10;
//   double y=5;
//   double z=(x+10)/(3*y);
//   cout<<z<<endl;
// }