# SalesTax

## How to Run:

1. In `main.cpp` file, make an object of Item Class.
2. Make an Object of Receipt Class.
3. Use `addItem()` method of Receipt Object to add Items.
4. Use `Print()` method of Receipt Object to Print Sales Tax.

### Syntax:
1. Item Object:
    ```cpp
    Item item(string Item_name, Category Item_Category, bool isImported, float Item_price);
    ```

2. Receipt Object:
   ```cpp
   Receipt r;
   ```

3. Add Item:
   ```cpp
   r.addItem(item);
   ```
   
4. Print Sales Tax:
   ```cpp
   r.print();
   ```
   
### Category:
   ```cpp
   enum Category {BOOK, FOOD, MEDICAL, OTHER};
   ```
    
