/*Student Marks Analyzer
Create a Student class containing an array to store marks of five subjects. Display all
marks, total marks, and average marks*/
#include<iostream>
#include<string>
using namespace std;
class student{
    int marks[5]; 
    int totalmarks = 0;
    float avgmarks;

public:
    void getMarks(){
        cout << "Enter marks of five subjects: "<<endl;
        for(int i = 1; i <= 5; i++){
            cin >> marks[i];
        }
    }

    void display(){
        cout << "Marks of five subjects: "<<endl;
        for(int i = 0; i < 5; i++){
            cout << marks[i] << " ";
            totalmarks = totalmarks + marks[i];
        }
        avgmarks = totalmarks / 5.0;   //5.0 avgmarks is in float
        cout << "Total Marks = " << totalmarks<<endl;
        cout << "Average Marks = "<<avgmarks<<endl;
    }
    
};
int main(){
    student s;
    s.getMarks();
    s.display();
    return 0;
}