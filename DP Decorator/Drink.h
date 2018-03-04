#pragma once

#include <string>

/*
Component
*/
class Drink {
public:
    Drink() {}
    virtual ~Drink() {}
    virtual std::string getDescription() const = 0;
    virtual double getPrice() const = 0;
};
