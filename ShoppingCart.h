//
// Created by tiena on 12/22/2023.
//

#ifndef HW_7_SHOPPINGCART_H
#define HW_7_SHOPPINGCART_H
#include <string>
#include <vector>
#include "ItemToPurchase.h"

class ShoppingCart {
public:
ShoppingCart();
ShoppingCart(string customer_Name, string date);
string GetCustomerName();
string GetDate();
void AddItem(ItemToPurchase& items);
void RemoveItem(string& item_name);
void ModifyItem(ItemToPurchase &item);
int GetNumItemsInCart() const;
int GetCostOfCart() const;
void PrintTotal();
void PrintDescription();
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;
};


#endif //HW_7_SHOPPINGCART_H
