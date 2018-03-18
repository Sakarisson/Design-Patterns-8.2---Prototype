#pragma once

#include "Product.h"

class DecoratorPrototype : public Product {
public:
    ~DecoratorPrototype();
    DecoratorPrototype* clone();
    void init(std::string, double, Product*);
    std::string getDescription() const override;
    double getPrice() const override;
private:
    Product* _product;
};
