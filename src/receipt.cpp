#include "receipt.hpp"
#include <iostream>
using namespace std;

double calculateSubtotal(double item1, double item2, double item3) {
    double sub = item1 + item2 + item3;
    return sub;
}

double calculateTax(double subtotal) {
    double tax = subtotal*TAX_RATE;
    return tax;
}

double calculateTip(double subtotal, double tipPercent) {
    double tipRate = tipPercent/100;
    double tip = subtotal*tipRate;
    return tip;
}

double calculateTotal(double subtotal, double tax, double tip) {
    double total = subtotal + tax + tip;
    return total;
}
