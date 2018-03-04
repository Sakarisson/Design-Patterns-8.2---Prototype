#pragma once

#include "Drink.h"

/*
Concrete components
*/

class Coffee : public Drink {
public:
    Coffee() {}
    virtual ~Coffee() {}
    std::string getDescription() const override;
    double getPrice() const override;
};

class Espresso : public Drink {
public:
    Espresso() {}
    virtual ~Espresso() {}
    std::string getDescription() const override;
    double getPrice() const override;
};

class Tea : public Drink {
public:
    Tea() {}
    virtual ~Tea() {}
    std::string getDescription() const override;
    double getPrice() const override;
};

class HotChocolate : public Drink {
public:
    HotChocolate() {}
    virtual ~HotChocolate() {}
    std::string getDescription() const override;
    double getPrice() const override;
};
