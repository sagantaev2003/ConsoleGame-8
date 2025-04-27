#ifndef DRINK_H
#define DRINK_H

#include "MenuItem.h"

class Drink : public MenuItem {
private:
    std::string volume; // Например, "0.5L", "1L"

public:
    Drink(const std::string& n, double price, const std::string& vol);
    double calculatePrice() const override;
    void display() const override;
};

#endif // DRINK_H