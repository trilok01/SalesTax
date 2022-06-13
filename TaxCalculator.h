#include"Item.h"

class TaxCalculator {
    Item item;
    
    public:
        TaxCalculator(Item i) {
            item = i;
        }
        
        float getBasicSalesTax();
        float getImportedTax();
};