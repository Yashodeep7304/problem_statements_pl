/*College Sports Championship
Create a Player class and an array of player objects. Store player name, sport, and
score. Display all players and identify the player with the highest score.*/
#include <iostream>
using namespace std;
class Player{
    string name, sport;
    int score;
public:
    void getinfo(){
        cout << "Enter Player Name: ";
        cin >> name;
        cout << "Enter Sport: ";
        cin >> sport;
        cout << "Enter Score: ";
        cin >> score;
    }
    void displayinfo(){
        cout << "Player Name: " << name;
        cout << "Sport: " << sport;
        cout << "Score: " << score << endl;
    }
    int getScore(){
        return score;
    }
    string getName(){
        return name;
    }
};
int main(){
    Player p[5];
    int highest = 0;
    cout << "Enter details of 5 players:"<<endl;
    for(int i = 0; i < 5; i++){
        cout << "Player " << i + 1 << endl;
        p[i].getinfo();
    }
    cout << "----- Player Details -----"<<endl;
    for(int i = 0; i < 5; i++){
        p[i].displayinfo();
        if(p[i].getScore() > p[highest].getScore()){
            highest = i;
        }
    }
    cout << "----- Highest Scoring Player -----"<<endl;
    cout << "Player Name: " << p[highest].getName()<<endl;
    cout << "Highest Score: " << p[highest].getScore()<<endl;
    return 0;
}