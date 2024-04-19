#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

int main() {
    // Create two objects of the ItemToPurchase class
    ItemToPurchase item1, item2;

    // Prompt for and set values for the first item
    cout << "Item 1" << endl;
    cout << "Enter the item name:"<<endl;
    string name;
    getline(cin, name); // Read the whole line including spaces
    item1.SetName(name);

    cout << "Enter the item price:"<<endl;
    int price;
    cin >> price;
    item1.SetPrice(price);

    cout << "Enter the item quantity:"<<endl;
    int quantity;
    cin >> quantity;
    item1.SetQuantity(quantity);

    cin.ignore(); // Ignore newline character in input buffer

    // Prompt for and set values for the second item
    cout << endl << "Item 2" << endl;
    cout << "Enter the item name:"<<endl;
    getline(cin, name); // Read the whole line including spaces
    item2.SetName(name);

    cout << "Enter the item price:"<<endl;
    cin >> price;
    item2.SetPrice(price);

    cout << "Enter the item quantity:"<<endl;
    cin >> quantity;
    item2.SetQuantity(quantity);

    // Calculate and output the total cost
    int totalCost = (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity());

    cout << endl << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetPrice() * item1.GetQuantity()) << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetPrice() * item2.GetQuantity()) << endl;
    cout << endl << "Total: $" << totalCost << endl;

    return 0;
}
