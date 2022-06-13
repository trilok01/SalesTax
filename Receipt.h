#include "Item.h"
#include<bits/stdc++.h>
using namespace std;

class Receipt {
    vector<Item> items;
    
    public:
        
        Receipt addItem(Item item);
        void print();
};