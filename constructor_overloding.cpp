#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    //default constructor
    Student(){
        rollno = 0;
        name = "xyz";
    }
    //parameterised constructor
    Student(int r,string n){
        rollno = r;
        name = n;
    }
    void display(){
        cout<<rollno<<" "<<name<<"\n";
    }
};
int main(){
    Student s1(15,"yashodeep"),s2(s1),s3;
    s1.display();
    s2.display();
    s3.display();
}