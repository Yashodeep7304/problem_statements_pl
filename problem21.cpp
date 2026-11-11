/*Monthly Expense Tracker
Create an Expense class containing an array to store expenses for 12 months. Display
the yearly expense and average monthly expense. */
#include<iostream>
#include<string>
using namespace std;
class Expense{
    int expenses[12];
    int yearly_expense=0;
    int avg_Expense;

public:
    void getinfo(){
        cout<<"enter the expenses of 12 months:"<<endl;
        for(int i = 1;i <= 12;i++){
            cin>>expenses[i];
        }
    }
    void displayinfo(){
         cout << "expenses of 12 months: "<<endl;
        for(int i = 0; i < 12; i++){
            cout << expenses[i] << " ";
            yearly_expense = yearly_expense + expenses[i];
        }
        avg_Expense = yearly_expense / 12.0;   //12.0 coz avg_Expense is in float
        cout << "Total expenses = " << yearly_expense<<endl;
        cout << "Average expenses = " << avg_Expense<<endl;
    }
};
int main(){
    Expense e;
    e.getinfo();
    e.displayinfo();
    return 0;
}