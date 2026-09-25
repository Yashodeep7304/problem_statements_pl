/*College Canteen Bill
Input the quantity and price of Tea, Coffee, Sandwich, and Vadapav. Display the total
bill. */
#include<iostream>
using namespace std;
int main(){
    int tea , coffee , sandwich , vadapav;
    double price_tea, price_coffee, price_sandwich, price_vadapav , total_bill;
    cout<<"enter the quantity of tea coffee , sandwich , vadapav"<<endl;
    cin>>tea>>coffee>>sandwich>>vadapav;

    cout<<"enter the price of tea,coffee ,sandwich,vadapav"<<endl;
    cin>>price_tea>>price_coffee>>price_sandwich>>price_vadapav;

    total_bill = (tea*price_tea) + (coffee*price_coffee) + (sandwich*price_sandwich) + (vadapav*price_vadapav);
    cout<<"the total bill is:"<<total_bill;
    return 0;
}
