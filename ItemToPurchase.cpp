//
// Created by tiena on 12/22/2023.
//

#include "ItemToPurchase.h"
#include <iostream>
using namespace std;

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemPrice = 0;
    itemQuantity = 0;
    itemDescription = "none";
}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

string ItemToPurchase::GetName() const{
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

int ItemToPurchase::GetPrice() const{
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() const{
    return itemQuantity;
}

void ItemToPurchase::SetDescription(string description) {
    this -> itemDescription = description;
}

string ItemToPurchase::GetDescription() const{
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() {
    cout << itemName << " " << itemQuantity << " @ " << '$' << itemPrice << " = " << '$' << itemPrice * itemQuantity << endl;
    cout << endl;
}

void ItemToPurchase::PrintItemDescription() {
    cout << itemName << ": " << itemDescription << '.' << endl;
    cout << endl;
}

ItemToPurchase::ItemToPurchase(string item_Name, string item_Decription, int price, int quantity) {
    itemName = item_Name;
    itemDescription = item_Decription;
    itemPrice = price;
    itemQuantity = quantity;
}

