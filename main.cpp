#include "Item.h"
#include "Receipt.h"
#include <iostream>
using namespace std;

int main() {
  
  //Item item1("Perfume", OTHER, true, 47.50);
  //Item item2("Perfume", OTHER, false, 18.99);
  //Item item3("Medicine", MEDICAL, false, 9.75);
  //Item item4("Chocolate", FOOD, true, 10.0);
  Item item5("Book", BOOK, false, 12.49);
  Item item6("CD", OTHER, false, 14.99);
  Item item7("Chocolate", FOOD, false, 0.85);

  Receipt r;

  //r.addItem(item1);
  //r.addItem(item2);
  //r.addItem(item3);
  //r.addItem(item4);
  r.addItem(item5);
  r.addItem(item6);
  r.addItem(item7);
  r.print();
  
  return 0;
}
