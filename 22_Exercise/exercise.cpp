#include <iostream>
using namespace std;

int main() {
    int lines=5;
    int count=1;
    for(int i=1; i<=lines; i++){
        for(int j=1; j<=count; j++){
            cout<<"X";
        }
        cout<<endl;
        count+=2;
    }

    return 0;
}
