# include <iostream>
using namespace std;
// show total sales sale tax and countytax and total tax on the console
int main(){

    double totalSales=95000;
    cout<<"TotalSales $"<<totalSales <<endl;;

    double saleTaxRate=0.04;
    double saleTax=totalSales * saleTaxRate;
    cout<<"SaleTax $"<< saleTax<< endl;

    double countyTaxRate=0.02;
    double countyTax=totalSales * countyTaxRate;
    cout<<"CountyTax $"<< countyTax<< endl;

    double totalTax=saleTax+countyTax;
    cout<<"TotalTax $"<<totalTax << endl;

}
//