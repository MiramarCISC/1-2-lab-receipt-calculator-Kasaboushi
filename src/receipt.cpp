#include "receipt.hpp"
#include <iostream>
using namespace std;

// TODO: Return the sum of all three item prices.
double calculateSubtotal(double item1, double item2, double item3) {
    double sub = item1 + item2 + item3;
    return sub;
}

// TODO: Return the sales tax for the subtotal using TAX_RATE.
double calculateTax(double subtotal) {
    double tax = subtotal*TAX_RATE;
    return tax;
}

// TODO: Return the tip amount.
// Example: if subtotal is 20.00 and tipPercent is 15,
// the tip should be 3.00.
double calculateTip(double subtotal, double tipPercent) {
    double tipRate = tipPercent/100;
    double tip = subtotal*tipRate;
    return tip;
}

// TODO: Return the final total.
double calculateTotal(double subtotal, double tax, double tip) {
    double total = subtotal + tax + tip;
    return total;
}
