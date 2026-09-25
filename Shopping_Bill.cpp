/*Input the prices and quantities of three products. Calculate and display the total
shopping bill. */
#include<iostream>
using namespace std;
int main(){
    int price1,price2,price3,quantity1,quantity2,quantity3,total_bill;
    cout<<"enter the price of product 1:"<<endl;
    cin>>price1;
    cout<<"enter the quantity of product 1:"<<endl;
    cin>>quantity1;
    cout<<"enter the price of product 2:"<<endl;
    cin>>price2;
    cout<<"enter the quantity of product 2:"<<endl;
    cin>>quantity2;
    cout<<"enter the price of product 3:"<<endl;
    cin>>price3;
    cout<<"enter the quantity of product 3:"<<endl;
    cin>>quantity3;
    total_bill = (price1*quantity1)+(price2*quantity2)+(price3*quantity3);
    cout<<"the total bill is:"<<total_bill;
    return 0;
}