#include <iostream>
#include <cstdlib>
#include <ctime>  // seconds from jan 1 1970

using namespace std;
int main(){
 
    srand(time(nullptr));
   int num= rand() %(7 - 0)+0 ;
   cout<<num;
}
