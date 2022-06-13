#include"Receipt.h"
#include"TaxCalculator.h"

Receipt Receipt::addItem(Item item) {
    items.push_back(item);
    return *this;
}

void Receipt::print() {
    float SalesTax = 0, Total = 0;
    
    for(Item item: items) {
        TaxCalculator tc(item);
        float tax = 0;

        if(item.category == 3) tax += tc.getBasicSalesTax();

        if(item.isImported) tax += tc.getImportedTax();
        
        SalesTax += tax;
        Total += item.basePrice + tax;

        cout << item.name << ": " << item.basePrice + tax << "\n";
    }
    
    cout << "SalesTax: " << SalesTax << "\n";
    cout << "Total: " << Total;
    
}