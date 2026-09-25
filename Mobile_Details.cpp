/*Create a Mobile class with brand, model, price, RAM, and storage. Create an object
and display its details.*/
#include<iostream>
#include<string>
using namespace std;
class Mobile{
    public:
    //data members
    string brand;
    string model;
    float price;
    float ram;
    float storage;
    //member functions
    void get_info(){
        cout<<"enter the brand name "<<endl;
        cin>>brand;
        cout<<"enter the model name  "<<endl;
        cin>>model;
        cout<<"enter the price "<<endl;
        cin>>price;
        cout<<"enter the ram "<<endl;
        cin>>ram;
        cout<<"enter the storage "<<endl;
        cin>>storage;
    }
    void show_info(){
        cout<<"brand:"<<brand<<endl;
        cout<<"model:"<<model<<endl;
        cout<<"price"<<price<<endl;
        cout<<"ram:"<<ram<<endl;
        cout<<"storage:"<<storage<<endl;
    }
};
int main(){
    Mobile M1;
    M1.get_info();
    M1.show_info();
    return 0;
}