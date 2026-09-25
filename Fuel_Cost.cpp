/*Input distance travelled, mileage of the car, and fuel price. Calculate the fuel required
and total fuel cost*/
#include<iostream>
using namespace std;
int main(){
    int distance_traveled, mileage , fuel_required , fuel_price;

    cout<<"enter the distance traveled by the car"<<endl;
    cin>>distance_traveled;

    cout<<"enter the mileage of the car"<<endl;
    cin>>mileage;             //how many km the car travels per litre

    cout<<"enter the price of the fuel"<<endl;
    cin>>fuel_price;

    fuel_required = distance_traveled / mileage;

    int total_fuel= fuel_required * fuel_price;
    
    cout<<"the fuel required is:"<<fuel_required<<"L"<<endl;
    cout<<"the total fuel cost is:"<<total_fuel<<"Rs"<<endl;

    return 0;
}