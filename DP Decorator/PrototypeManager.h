#pragma once

#include "DrinkPrototype.h"
#include "DecoratorPrototype.h"

class PrototypeManager {
public:
    static PrototypeManager* instance();
    Product* getDrink(std::string);
    Product* getDecorator(Product*, std::string);
private:
    PrototypeManager() {}
    static PrototypeManager* _instance;
    DrinkPrototype _drinkPrototype;
    DecoratorPrototype _decoratorPrototype;
};
