/*Create a Book class with book name, author, price, and edition. Create an object and
display the book details*/

#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
    string book_name;
    string author_name;
    float price;
    string edition;

    void get_info()
    {
        cout<<"enter the book name "<<endl;
        cin>>book_name;
        cout<<"enter the author name  "<<endl;
        cin>>author_name;
        cout<<"enter the price "<<endl;
        cin>>price;
        cout<<"enter the edition "<<endl;
        cin>>edition;
    }
    void show_info()
    {
        cout<<"book name:"<<book_name<<endl;
        cout<<"author name:"<<author_name<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"edition:"<<edition<<endl;
    }
};
int main()
{
    Book b1;
    b1.get_info();
    b1.show_info();
    return 0;
}