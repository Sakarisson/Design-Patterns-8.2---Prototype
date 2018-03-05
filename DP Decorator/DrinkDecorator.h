#pragma once

#include "Drink.h"
#include <string>

class DrinkDecorator : public Drink {
public:
    DrinkDecorator(Drink* previous) { _previous = previous; }
    virtual ~DrinkDecorator() { delete _previous; }

    std::string getDescription() const override;
    double getPrice() const override;
private:
    Drink* _previous;
};
