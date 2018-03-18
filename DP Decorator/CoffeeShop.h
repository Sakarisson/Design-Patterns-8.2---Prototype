#pragma once

#include <string>

class Product;

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
    Product* _drink;
};
