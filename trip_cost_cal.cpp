/*Input the number of people, travel cost per person, food cost per person, and entry
fees. Calculate the total trip cost. */
#include<iostream>
using namespace std;
int main(){
    int cost_per_person,num_of_people,food_cost,entry_fee,total_cost,total_cost_per_person;
    cout<<"enter the number of people"<<endl;
    cin>>num_of_people;
    cout<<"enter the cost per person"<<endl;
    cin>>cost_per_person;
    cout<<"enter the food cost per person"<<endl;
    cin>>food_cost;
    cout<<"enter the entery fee per person"<<endl;
    cin>>entry_fee;
    total_cost_per_person = cost_per_person+food_cost+entry_fee;
    total_cost = total_cost_per_person*num_of_people;
    cout<<"hence total trip cost will be:"<<total_cost;
    return 0;
}