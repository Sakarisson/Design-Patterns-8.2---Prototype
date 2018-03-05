#pragma once

#include "Drink.h"

/*
Concrete Decorators
*/
class Sugar : public Drink {
public:
    Sugar(Drink*);
    ~Sugar() { delete _previous; }
    std::string getDescription() const override;
    double getPrice() const override;

private:
    Drink* _previous;
};

class Milk : public Drink {
public:
    Milk(Drink*);
    ~Milk() { delete _previous; }
    std::string getDescription() const override;
    double getPrice() const override;

private:
    Drink* _previous;
};

class Cream : public Drink {
public:
    Cream(Drink*);
    ~Cream() { delete _previous; }
    std::string getDescription() const override;
    double getPrice() const override;

private:
    Drink* _previous;
};

class WhippingCream : public Drink {
public:
    WhippingCream(Drink*);
    ~WhippingCream() { delete _previous; }
    std::string getDescription() const override;
    double getPrice() const override;

private:
    Drink* _previous;
};

class SomethingSalty : public Drink {
public:
    SomethingSalty(Drink*);
    ~SomethingSalty() { delete _previous; }
    std::string getDescription() const override;
    double getPrice() const override;

private:
    Drink* _previous;
};
