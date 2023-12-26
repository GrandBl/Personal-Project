//
// Created by tiena on 12/22/2023.
//

#ifndef HW_7_ITEMTOPURCHASE_H
#define HW_7_ITEMTOPURCHASE_H
#include <string>
using namespace std;
class ItemToPurchase {
public:
    void SetName(string name);
    string GetName() const;
    void SetPrice(int price);
    int GetPrice() const;
    void SetQuantity(int quantity);
    int GetQuantity() const;
    ItemToPurchase();
    ItemToPurchase(string item_Name, string item_Decription, int price, int quantity);
    void SetDescription(string description);
    string GetDescription() const;
    void PrintItemCost();
    void PrintItemDescription();
private:
    string itemName;
    int itemPrice;
    string itemDescription;
    int itemQuantity;
};


#endif //HW_7_ITEMTOPURCHASE_H
