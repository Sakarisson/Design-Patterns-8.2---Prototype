#pragma once

#include <string>

// Base class for all drink-delated products
class Product {
public:
    virtual std::string getDescription() const = 0;
    virtual double getPrice() const = 0;
protected:
    std::string _name;
    double _price;
};
