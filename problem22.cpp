/*Daily Temperature Tracker
Create a Weather class containing an array to store temperatures for seven days.
Display all temperatures and calculate the average temperature. */
#include<iostream>
#include<string>
using namespace std;
class Weather{
    int temperatures[7];
    int tot_Temp=0;
    int avg_Temp;

public:
    void getinfo(){
        cout<<"enter the 7 temperatures :"<<endl;
        for(int i = 1;i <= 7;i++){
            cin>>temperatures[i];
        }
    }
    void displayinfo(){
        cout << "\nTemperatures for 7 days:\n";
        for(int i = 0; i < 7; i++){
            cout << "Day " << i + 1 << ": "<< temperatures[i] << endl;
            tot_Temp = tot_Temp + temperatures[i];
        }
        avg_Temp = tot_Temp / 7;
        cout << "\navgTemp Temperature = " << avg_Temp;
    }
};
int main(){
    Weather w;
    w.getinfo();
    w.displayinfo();
    return 0;
}