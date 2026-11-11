/*Library Book Collection
Create a Book class and an array of 5 book objects. Store book name, author, and
price. Display all books and identify the book with the highest price. */
#include <iostream>
using namespace std;
class Book{
    string name, author;
    float price;
public:
    void getinfo(){
        cout << "Enter Book Name: ";
        cin >> name;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Price: ";
        cin >> price;
    }
    void displayinfo(){
        cout << "Book Name: " << name<<endl;
        cout << "Author: " << author<<endl;
        cout << "Price: " << price << endl;
    }
    float getPrice(){
        return price;
    }
    string getName(){
        return name;
    }
};
int main(){
    Book b[5];
    int highest = 0;
    cout << "Enter details of 5 books:"<<endl;
    for(int i = 0; i < 5; i++){
        cout << "Book " << i + 1 << endl;
        b[i].getinfo();
    }
    cout << "----- Book Details -----"<<endl;
    for(int i = 0; i < 5; i++){
        b[i].displayinfo();
        if(b[i].getPrice() > b[highest].getPrice()){
            highest = i;
        }
    }
    cout << "----- Highest Priced Book -----"<<endl;
    cout << "Book Name: " << b[highest].getName()<<endl;
    cout << "Price: " << b[highest].getPrice()<<endl;
    return 0;
}