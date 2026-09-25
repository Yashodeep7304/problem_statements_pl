// Input the pizza price and quantity. Calculate and display the total bill.
#include <iostream>
#include <string>
using namespace std;

int main() {
    double price, quantity, total;

    cout << "Enter the price of one pizza: ";
    cin >> price;

    cout << "Enter the quantity: ";
    cin >> quantity;

    total = price * quantity;
    cout << "Total bill: " << total << endl;

    return 0;
}