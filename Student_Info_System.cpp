/*Create a Student class with roll number, name, and marks as data members. Create an
object and display the student's information. */
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    //data members
    int rollno;
    string name;
    int phy;
    int chem;
    int maths;
    //member functions
    void get_info(){
        cout<<"enter the roll number "<<endl;
        cin>>rollno;
        cout<<"enter the name  "<<endl;
        cin>>name;
        cout<<"enter the phy marks "<<endl;
        cin>>phy;
         cout<<"enter the chem marks "<<endl;
        cin>>chem;
        cout<<"enter the maths marks "<<endl;
        cin>>maths;
    }
    void show_info(){
        cout<<"roll no:"<<rollno<<endl;
        cout<<"name"<<name<<endl;
        cout<<"phy"<<phy<<endl;
        cout<<"chem:"<<chem<<endl;
        cout<<"maths:"<<maths<<endl;
    }
};
int main(){
    Student s1;
    s1.get_info();
    s1.show_info();
    return 0;
}