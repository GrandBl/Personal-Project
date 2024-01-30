#include <iostream>

#include <iomanip>

#include <string>

using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl << endl;
}

void ExecuteMenu(char option, ShoppingCart & theCart) {
    ItemToPurchase items;
    string name;
    string item_name;
    int quantity;
    string description;
    int price;

        switch (option) {

        case 'a':
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, name);
            items.SetName(name);

            cout << "Enter the item description:" << endl;
            getline(cin, description);
            items.SetDescription(description);

            cout << "Enter the item price:" << endl;
            cin >> price;
            items.SetPrice(price);

            cout << "Enter the item quantity:" << endl;
            cin >> quantity;
            items.SetQuantity(quantity);
            theCart.AddItem(items);
            cout << endl;

            break;

        case 'd':
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            cin.ignore();
            getline(cin, name);
            theCart.RemoveItem(name);
            cout << endl;

            break;

        case 'o':
            theCart.PrintTotal();
            break;

        case 'c':
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, name);
            cout << "Enter the new quantity:" << endl;
            cin >> quantity;
            items.SetName(name);
            items.SetQuantity(quantity);
            theCart.ModifyItem(items);

            break;

        case 'i':

            theCart.PrintDescription();
            break;

        case 'q':
            exit(0);
    }
}

int main() {

    string name;
    string date;
    char option;
    cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    getline(cin, date);
    cout << endl;
    cout << "Customer name: " << name << endl;
    cout << "Today's date: " << date << endl;
    ShoppingCart myCart(name, date);
    cout << endl;
    PrintMenu();
    cout << "Choose an option:" << endl;
    while (cin >> option) {
        if (option == 'a' || option == 'd' || option == 'c' || option == 'c' || option == 'i' || option == 'o' ||
            option == 'q') {
            ExecuteMenu(option, myCart);
        }
        else{
          cout << "Choose an option:" << endl;
          continue;
        }
        PrintMenu();
        cout << "Choose an option:" << endl;
       
    }
    return 0;
}
