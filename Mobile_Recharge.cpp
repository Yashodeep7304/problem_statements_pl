//Input recharge amount and GST percentage. Calculate and display the final amount. 
#include<iostream>
using namespace std;
int main(){
    float amount,gst = 18.0/100;
    cout<<"enter the amout of recharge"<<endl;
    cin>>amount;

    float gst_amt = amount * gst;
    cout<<"your amount is :"<<amount<<endl;
    cout<<"gst on your amount is:"<<gst_amt<<endl;

    float final_amt = amount + (amount*gst);
    cout<<"your final amt will be:"<<final_amt;

    return 0;
}