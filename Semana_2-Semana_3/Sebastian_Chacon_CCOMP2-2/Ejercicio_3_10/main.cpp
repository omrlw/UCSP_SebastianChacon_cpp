#include <iostream>
#include "Invoice.h"

int main() {
    Invoice invoice("12345", "Widget", 5, 10);

    // Display invoice details
    std::cout << "Part Number: " << invoice.getPartNumber() << std::endl;
    std::cout << "Part Description: " << invoice.getPartDescription() << std::endl;
    std::cout << "Quantity: " << invoice.getQuantity() << std::endl;
    std::cout << "Price Per Item: $" << invoice.getPricePerItem() << std::endl;
    std::cout << "VAT Rate: " << (invoice.getVatRate() * 100) << "%" << std::endl;
    std::cout << "Discount Rate: " << (invoice.getDiscountRate() * 100) << "%" << std::endl;

    // Calculate and display the invoice amount
    double invoiceAmount = invoice.getInvoiceAmount();
    std::cout << "Invoice Amount: $" << invoiceAmount << std::endl;

    return 0;
}
