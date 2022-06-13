#include"TaxCalculator.h"

float TaxCalculator::getBasicSalesTax() {
    return round(item.basePrice * 0.1 * 20.0) / 20.0;
}

float TaxCalculator::getImportedTax() {
    return round(item.basePrice * 0.05 * 20.0) / 20.0;
}