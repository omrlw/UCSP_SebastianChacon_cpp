#include <iostream>
#include <string>

class Invoice {
public:
    Invoice(std::string partNumber, std::string partDescription, int quantity, int pricePerItem)
            : partNumber(partNumber), partDescription(partDescription), quantity(quantity), pricePerItem(pricePerItem), vatRate(0.20), discountRate(0.0) {
        // Validate and set data members
        if (quantity <= 0) {
            this->quantity = 0;
        }
        if (pricePerItem <= 0) {
            this->pricePerItem = 0;
        }
    }

    // Setters and Getters
    void setPartNumber(std::string partNumber) {
        this->partNumber = partNumber;
    }
    std::string getPartNumber() const {
        return partNumber;
    }

    void setPartDescription(std::string partDescription) {
        this->partDescription = partDescription;
    }
    std::string getPartDescription() const {
        return partDescription;
    }

    void setQuantity(int quantity) {
        if (quantity > 0) {
            this->quantity = quantity;
        }
    }
    int getQuantity() const {
        return quantity;
    }

    void setPricePerItem(int pricePerItem) {
        if (pricePerItem > 0) {
            this->pricePerItem = pricePerItem;
        }
    }
    int getPricePerItem() const {
        return pricePerItem;
    }

    void setVatRate(double vatRate) {
        if (vatRate >= 0) {
            this->vatRate = vatRate;
        }
    }
    double getVatRate() const {
        return vatRate;
    }

    void setDiscountRate(double discountRate) {
        if (discountRate >= 0) {
            this->discountRate = discountRate;
        }
    }
    double getDiscountRate() const {
        return discountRate;
    }

    // Calculate the invoice amount
    double getInvoiceAmount() const {
        double subtotal = quantity * pricePerItem;
        double vatAmount = subtotal * vatRate;
        double discountAmount = subtotal * discountRate;
        return subtotal + vatAmount - discountAmount;
    }

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    int pricePerItem;
    double vatRate;
    double discountRate;
};
