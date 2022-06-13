#include<bits/stdc++.h>
using namespace std;

#ifndef ITEM_H
#define ITEM_H

enum Category {BOOK, FOOD, MEDICAL, OTHER};

class Item {
  
  public:
  
  string name;
  Category category;
  bool isImported;
  float basePrice;
  
  Item(string a, Category b, bool c, float d) {
      name = a;
      category = b;
      isImported = c;
      basePrice = d;
  }
  
  Item() {
  }
  
  void print();
};

#endif
  	