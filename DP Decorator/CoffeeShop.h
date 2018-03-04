#pragma once

#include "BasicDrinks.h"

#include <string>

// Test class
class CoffeeShop {
public:
    CoffeeShop() {}
    ~CoffeeShop();

    void showMenu();
    bool addBaseDrink(int);
    bool addToDrink(int);
    int getMenuChoice() const;
    std::string getYesOrNo() const;

private:
    bool baseDrinkChosen = false;
    Drink* _drink;
};
