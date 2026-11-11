/*Cricket Score Tracker
Create a Cricketer class containing an array to store scores from five matches. Display
all scores, total runs, and average runs. */
#include<iostream>
#include<string>
using namespace std;
class cricket{
    int score[5];
    int total_Runs=0;
    int avg_Runs;

public:
    void getinfo(){
        cout<<"enter the score of 5 matches:"<<endl;
        for(int i = 1;i <= 5;i++){
            cin>>score[i];
        }
    }
    void displayinfo(){
         cout << "score of five matches: "<<endl;
        for(int i = 0; i < 5; i++){
            cout << score[i] << " ";
            total_Runs = total_Runs + score[i];
        }
        avg_Runs = total_Runs / 5.0;   //5.0 coz average is in float
        cout << "Total score = " << total_Runs<<endl;
        cout << "Average score = " << avg_Runs<<endl;
    }
};
int main(){
    cricket c;
    c.getinfo();
    c.displayinfo();
    return 0;
}