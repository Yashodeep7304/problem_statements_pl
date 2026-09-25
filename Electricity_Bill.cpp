/*Input the number of units consumed and cost per unit. Calculate the estimated
electricity bill.*/ 
#include<iostream>
using namespace std;
int main(){
    float num_of_units,cost_per_unit,total_bill;
    cout<<"enter the number of units consumed:"<<endl;
    cin>>num_of_units;
    cout<<"enter the cost per unit:"<<endl;
    cin>>cost_per_unit;
    total_bill = num_of_units * cost_per_unit;
    cout<<"the estimated electricity bill:"<<total_bill;
    return 0;
}