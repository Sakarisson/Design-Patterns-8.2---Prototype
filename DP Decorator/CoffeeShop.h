#pragma once

#include <string>

class Drink;

// Test class
class CoffeeShop {
public:
    CoffeeShop();
    ~CoffeeShop();

    void run();

private:
    void showDrinkMenu();
    bool addBaseDrink(int);
    bool addToDrink(int);
    int getMenuChoice() const;
    std::string getYesOrNo() const;

private:
    bool _running;
    bool _orderDone;
    Drink* _drink;
};
