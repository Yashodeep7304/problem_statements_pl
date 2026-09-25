//Input temperature in Celsius and convert it into Fahrenheit. 
#include<iostream>
using namespace std;
int main(){
    double temp_cel,tem_fahren;
    cout<<"enter the temperature in celsius:"<<endl;
    cin>>temp_cel;
    tem_fahren = (temp_cel*9/5)+32;    //(c*9/5)+32
    cout<<""<<tem_fahren;
    return 0 ;
}