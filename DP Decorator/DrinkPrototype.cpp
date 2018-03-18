#include "DrinkPrototype.h"

DrinkPrototype* DrinkPrototype::clone() {
    return new DrinkPrototype();
}

void DrinkPrototype::init(std::string name, double price) {
    _name = name;
    _price = price;
}

std::string DrinkPrototype::getDescription() const {
    return this->_name;
}

double DrinkPrototype::getPrice() const {
    return this->_price;
}
