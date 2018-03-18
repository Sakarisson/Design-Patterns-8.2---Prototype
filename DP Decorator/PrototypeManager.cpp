#include "PrototypeManager.h"

PrototypeManager* PrototypeManager::_instance = nullptr;

PrototypeManager* PrototypeManager::instance() {
    if (_instance == nullptr) {
        _instance = new PrototypeManager();
    }
    return _instance;
}

Product* PrototypeManager::getDrink(std::string drinkName) {
    DrinkPrototype* drink = _drinkPrototype.clone();

    if (drinkName == "Coffee") {
        drink->init("Coffee", 10);
        return drink;
    }
    else if (drinkName == "Espresso") {
        drink->init("Espresso", 14);
        return drink;
    }
    else if (drinkName == "Tea") {
        drink->init("Tea", 10);
        return drink;
    }
    else if (drinkName == "Hot Chocolate") {
        drink->init("Hot Chocolate", 12);
        return drink;
    }
    // Implied else
    delete drink;
    return nullptr;
}

Product* PrototypeManager::getDecorator(Product* previous, std::string decoratorName) {
    DecoratorPrototype* decorator = _decoratorPrototype.clone();

    if (decoratorName == "Sugar") {
        decorator->init("Sugar", 1, previous);
        return decorator;
    }
    else if (decoratorName == "Milk") {
        decorator->init("Milk", 1, previous);
        return decorator;
    }
    else if (decoratorName == "Cream") {
        decorator->init("Cream", 2, previous);
        return decorator;
    }
    else if (decoratorName == "Whipping Cream") {
        decorator->init("Whipping Cream", 5, previous);
        return decorator;
    }
    else if (decoratorName == "Something Salty") {
        decorator->init("Something Salty", 4, previous);
        return decorator;
    }
    // Implied else
    delete decorator;
    return nullptr;
}
