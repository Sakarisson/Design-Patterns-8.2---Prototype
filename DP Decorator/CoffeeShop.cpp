#include "CoffeeShop.h"
#include "BasicDrinks.h"
#include "DrinkDecorators.h"

#include <iostream>

using std::cout;
using std::endl;

CoffeeShop::CoffeeShop() {
    _running = true;
    _orderDone = false;
}

CoffeeShop::~CoffeeShop() {
    delete _drink;
}

void CoffeeShop::run() {
    while (_running) {
        showDrinkMenu();
        if (_orderDone) {
            cout <<
                "Your order: " + _drink->getDescription() <<
                ", price " << _drink->getPrice() << " SEK" << endl;
            _orderDone = false;
            delete _drink;
            _drink = nullptr;
        }
    }
}

void CoffeeShop::showDrinkMenu() {
    cout <<
        "Welcome to Decorator Coffee <3" << endl <<
        "\"A Class Above Others\"" << endl <<
        "==============================" << endl;
    while (_drink == nullptr) {
        cout <<
            "Make your choice" << endl <<
            "1. Create order" << endl <<
            "2. Quit" << endl;
        int choice = this->getMenuChoice();
        if (choice == 1) {
            cout <<
                "Please pick your drink" << endl <<
                "1. Coffee" << endl <<
                "2. Espresso" << endl <<
                "3. Tea" << endl <<
                "4. Chocolate Milk" << endl;

            choice = this->getMenuChoice();
            if (!this->addBaseDrink(choice)) {
                cout << "Invalid choice. Please try again" << endl;
            }
        }
        else {
            _running = false;
            return;
        }
    }
    bool validChoice = false;

    cout <<
        "Do you want to add anything to your order? (yes/no)";

    while (!validChoice) {
        std::string answer = this->getYesOrNo();

        if (answer == "yes") {
            validChoice = true;
            cout <<
                "Please pick what else you want" << endl <<
                "1. Sugar" << endl <<
                "2. Milk" << endl <<
                "3. Cream" << endl <<
                "4. Whipping Cream" << endl <<
                "5. Something Salty" << endl;
            int choice = this->getMenuChoice();
            if (this->addToDrink(choice)) {
                cout <<
                    "Successfully added to drink" << endl;
            }
            else {
                cout <<
                    "Invalid choice" << endl;
            }
        }
        else if (answer == "no") {
            validChoice = true;
            _orderDone = true;
        }
        else {
            cout << "Invalid option. Please respond \"yes\" or \"no\"";
        }
    }
}

bool CoffeeShop::addBaseDrink(int choice) {
    switch (choice) {
    case 1:
        _drink = new Coffee();
        break;
    case 2:
        _drink = new Espresso();
        break;
    case 3:
        _drink = new Tea();
        break;
    case 4:
        _drink = new HotChocolate();
        break;
    default:
        return false;
    }
    return true;
}

bool CoffeeShop::addToDrink(int choice) {
    switch (choice) {
    case 1:
        _drink = new Sugar(_drink);
        break;
    case 2:
        _drink = new Milk(_drink);
        break;
    case 3:
        _drink = new Cream(_drink);
        break;
    case 4:
        _drink = new WhippingCream(_drink);
        break;
    case 5:
        _drink = new SomethingSalty(_drink);
        break;
    default:
        return false;
    }
    return true;
}

int CoffeeShop::getMenuChoice() const {
    int choice;
    std::cin >> choice;
    return choice;
}

std::string CoffeeShop::getYesOrNo() const {
    std::string answer;
    std::cin >> answer;
    return answer;
}
