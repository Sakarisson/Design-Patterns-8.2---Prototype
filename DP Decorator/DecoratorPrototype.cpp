#include "DecoratorPrototype.h"

DecoratorPrototype::~DecoratorPrototype() {
    delete _product;
}

DecoratorPrototype* DecoratorPrototype::clone() {
    return new DecoratorPrototype();
}

void DecoratorPrototype::init(std::string name, double price, Product* product) {
    _name = name;
    _price = price;
    _product = product;
}

std::string DecoratorPrototype::getDescription() const {
    return _product->getDescription() + " + " + _name;
}

double DecoratorPrototype::getPrice() const {
    return _product->getPrice() + _price;
}
