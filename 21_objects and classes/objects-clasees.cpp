#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    int salary;
    void printDetails(){
        cout<< "The name of employee is "<<this->name<<endl<<"Salary is "<<this->salary<< "$" << endl;
    }
};
main(){
 Employee Aitee;
 Aitee.name="Aitezaz";
 Aitee.salary=100;
 Aitee.printDetails();
 Employee Ahmed;
 Ahmed.name="Ahmed";
 Ahmed.salary=50;
 Ahmed.printDetails();
}