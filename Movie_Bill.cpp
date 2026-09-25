/*Input the number of adult and child tickets and their respective prices. Calculate the
total ticket cost. */
#include <iostream>
using namespace std;

int main() {
    int num_of_adults, num_of_children, price_of_adult_ticket,price_of_children_ticket;

    cout << "Enter the number of adults: ";
    cin >> num_of_adults;

    cout << "Enter the number of children: ";
    cin >> num_of_children;

    cout << "Enter the price of adult ticket: ";
    cin >> price_of_adult_ticket;

    cout << "Enter the price of achildren ticket: ";
    cin >> price_of_children_ticket;

    int total_adult_amt = num_of_adults * price_of_adult_ticket;
    int total_children_amt =  num_of_children * price_of_children_ticket;

    cout << "Total bill: " << total_adult_amt + total_children_amt<< endl;

    return 0;
}