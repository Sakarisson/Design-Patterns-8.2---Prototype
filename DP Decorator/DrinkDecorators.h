#pragma once

#include "Drink.h"

class DrinkDecorator : public Drink {
public:
    DrinkDecorator(Drink* previous) { _previous = previous; }
    virtual ~DrinkDecorator() { delete _previous; }

    std::string getDescription() const override;
    double getPrice() const override;

protected:
    std::string _name;
    double _price;

private:
    Drink* _previous;
};

/*
Concrete Decorators
*/
class Sugar : public DrinkDecorator {
public:
    Sugar(Drink*);
    virtual ~Sugar() {}
};

class Milk : public DrinkDecorator {
public:
    Milk(Drink*);
    virtual ~Milk() {}
};

class Cream : public DrinkDecorator {
public:
    Cream(Drink*);
    virtual ~Cream() {}
};

class WhippingCream : public DrinkDecorator {
public:
    WhippingCream(Drink*);
    virtual ~WhippingCream() {}
};

class SomethingSalty : public DrinkDecorator {
public:
    SomethingSalty(Drink*);
    virtual ~SomethingSalty() {}
};
