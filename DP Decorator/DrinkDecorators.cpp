#include "DrinkDecorators.h"

std::string DrinkDecorator::getDescription() const {
    return _previous->getDescription() + " + " + _name;
}

double DrinkDecorator::getPrice() const {
    return _previous->getPrice() + _price;
}

Sugar::Sugar(Drink* previous) : DrinkDecorator(previous) {
    _name = "sugar";
    _price = 1.0;
}

Milk::Milk(Drink* previous) : DrinkDecorator(previous) {
    _name = "milk";
    _price = 1.0;
}

Cream::Cream(Drink* previous) : DrinkDecorator(previous) {
    _name = "cream";
    _price = 2.0;
}

WhippingCream::WhippingCream(Drink* previous) : DrinkDecorator(previous) {
    _name = "whipping cream";
    _price = 5.0;
}

SomethingSalty::SomethingSalty(Drink* previous) : DrinkDecorator(previous) {
    _name = "something salty";
    _price = 4.0;
}
