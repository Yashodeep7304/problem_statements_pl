/*College Student Database
Create a Student class and an array of 5 student objects. Store roll number, name, and
marks for each student and display all student details. */
#include <iostream>
using namespace std;
class Student{
    int rollNo;
    string name;
    float marks;
public:
    void getinfo(){
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayinfo(){
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};
int main(){
    Student s[5];
    cout << "Enter details of 5 students:\n";
    for(int i = 0; i < 5; i++){
        cout << "\nStudent " << i + 1 << endl;
        s[i].getinfo();
    }
    cout << "\n----- Student Details -----\n";
    for(int i = 0; i < 5; i++){
        cout << "\nStudent " << i + 1;
        s[i].displayinfo();
    }

    return 0;
}