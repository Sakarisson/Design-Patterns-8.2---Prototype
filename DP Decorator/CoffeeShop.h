#pragma once

#include "BasicDrinks.h"

#include <string>
#include <memory>

// Test class
class CoffeeShop {
public:
    CoffeeShop() {}
    ~CoffeeShop() {}

    void showMenu();
    bool addBaseDrink(int);
    bool addToDrink(int);
    int getMenuChoice() const;
    std::string getYesOrNo() const;

private:
    bool baseDrinkChosen = false;
    std::unique_ptr<Drink> _drink;
};
