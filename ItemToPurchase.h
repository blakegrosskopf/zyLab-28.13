#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
  private:
  string itemName;
  int itemPrice;
  int itemQuantity;

  public:
  ItemToPurchase();
  void SetName(string name);
  void SetPrice(int price);
  void SetQuantity(int qty);

  string GetName();
  int SetPrice();
  int SetQuantity();

  void Print();
}
#endif
