// Input marks of five subjects. Calculate and display total marks and percentage. 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int phy,chem,maths,eng,pl ,total_marks,percentage;
    cout<<"enter phy marks:"<<endl;
    cin>>phy;
    cout<<"enter chem marks:"<<endl;
    cin>>chem;
    cout<<"enter phy marks:"<<endl;
    cin>>maths;
    cout<<"enter eng marks:"<<endl;
    cin>>eng;
    cout<<"enter pl marks:"<<endl;
    cin>>pl;
    total_marks = phy + chem + maths + eng + pl;
    cout<<"total marks obtained from 500 is :"<<total_marks<<endl;
    percentage = total_marks/5;
    cout<<"percent obtained:"<<percentage<<"%";
    return 0; 
}