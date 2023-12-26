//
// Created by tiena on 12/22/2023.
//

#include "ShoppingCart.h"
#include <iostream>
using namespace std;

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string customer_Name, string date) {
    customerName = customer_Name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDate() {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase& items) {
    cartItems.push_back(items);
}

void ShoppingCart::RemoveItem(string& item_name) {
    if (cartItems.empty()) {
        cout << "Item not found in cart. Nothing removed." << endl;
        return;
    }
    else {
        for (unsigned int i = 0; i < cartItems.size(); i++) {
            if (cartItems.at(i).GetName() == item_name) {
                cartItems.erase(cartItems.begin() + i);
                return;
            }
        }
    }
    cout << "Item not found in cart. Nothing removed." << endl;
}

void ShoppingCart::ModifyItem(ItemToPurchase &item) {
    if(!(cartItems.empty())) {
        for (unsigned int i = 0; i < cartItems.size(); i++) {
            if (cartItems.at(i).GetName() == item.GetName()) {
                if (cartItems.at(i).GetQuantity() != 0)
                    cartItems.at(i).SetQuantity(item.GetQuantity());
                return;
            }
        }
    }
    else {
        cout << "Item not found in cart. Nothing modified." << endl << endl;
    }
    cout << "Item not found in cart. Nothing modified." << endl << endl;
}

int ShoppingCart::GetNumItemsInCart() const{
    int quantity_numItems = 0;
    for(unsigned int i = 0; i < cartItems.size(); i++){
        quantity_numItems += cartItems.at(i).GetQuantity();
    }
    return quantity_numItems;
}

int ShoppingCart::GetCostOfCart() const{
    int total = 0;
    for(unsigned int i = 0; i < cartItems.size(); i++){
        total = total + cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity();
    }
    return total;
}

void ShoppingCart::PrintTotal() {
    cout << "OUTPUT SHOPPING CART" << endl;
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl;
    cout << endl;

    if(!cartItems.empty()) {
        for (unsigned int i = 0; i < cartItems.size(); i++) {
            cout << cartItems.at(i).GetName() << " " << cartItems.at(i).GetQuantity() << " @ " << '$'
                 << cartItems.at(i).GetPrice() << " = " << '$'
                 << cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity() << endl;
        }
        cout << endl;
        cout << "Total: " << '$' << GetCostOfCart() << endl;
        cout << endl;
        return;
    }

    cout << "SHOPPING CART IS EMPTY" << endl << endl;

    cout << "Total: " << '$' << GetCostOfCart() << endl;
    cout << endl;
}

void ShoppingCart::PrintDescription() {
    cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;

    if(!cartItems.empty()){
        for(unsigned int i = 0; i < cartItems.size(); i++){
            cout << cartItems.at(i).GetName() << ": " << cartItems.at(i).GetDescription() << endl;
        }
        cout << endl;
        return;
    }
    cout << "SHOPPING CART IS EMPTY." << endl << endl;
}


