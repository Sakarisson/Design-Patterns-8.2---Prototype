#pragma once

#include "Product.h"

/*
Component
*/
class DrinkPrototype : public Product {
public:
    DrinkPrototype* clone();
    void init(std::string, double);
    std::string getDescription() const override;
    double getPrice() const override;
};
