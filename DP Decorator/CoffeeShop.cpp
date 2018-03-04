#include "CoffeeShop.h"

#include <iostream>

using std::cout;
using std::endl;

void CoffeeShop::showMenu() {
    cout <<
        "Welcome to Decorator Coffee <3" << endl <<
        "\"A Class Above Others\"" << endl <<
        "==============================" << endl;
    while (!baseDrinkChosen) {
        cout <<
            "Please pick your drink" << endl <<
            "1. Coffee" << endl <<
            "2. Espresso" << endl <<
            "3. Tea" << endl <<
            "4. Chocolate Milk" << endl;

        int choice = this->getMenuChoice();
        if (this->addBaseDrink(choice)) {
            baseDrinkChosen = true;
        }
        else {
            cout << "Invalid choice. Please try again" << endl;
        }
    }
    bool validChoice = false;

    cout <<
        "Do you want to add anything to your order? (yes/no)";

    while (!validChoice) {
        std::string answer = this->getYesOrNo();

        if (answer == "yes") {
            validChoice = true;
        }
        else if (answer == "no") {
            validChoice = true;
        }
        else {
            cout << "Invalid option. Please respond \"yes\" or \"no\"";
        }
    }
}

bool CoffeeShop::addBaseDrink(int choice) {
    switch (choice) {
    case 1:
        _drink = std::make_unique<Coffee>();
        break;
    case 2:
        _drink = std::make_unique<Espresso>();
        break;
    case 3:
        _drink = std::make_unique<Tea>();
        break;
    case 4:
        _drink = std::make_unique<HotChocolate>();
        break;
    default:
        return false;
    }
    return true;
}

bool CoffeeShop::addToDrink(int choice) {
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
