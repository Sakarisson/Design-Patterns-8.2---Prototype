#include "DrinkDecorators.h"

Sugar::Sugar(Drink* previous) {
    _previous = previous;
}

std::string Sugar::getDescription() const {
    return _previous->getDescription() + " + sugar";
}

double Sugar::getPrice() const {
    return _previous->getPrice() + 1.0;
}

Milk::Milk(Drink* previous) {
    _previous = previous;
}

std::string Milk::getDescription() const {
    return _previous->getDescription() + " + milk";
}

double Milk::getPrice() const {
    return _previous->getPrice() + 1.0;
}

Cream::Cream(Drink* previous) {
    _previous = previous;
}

std::string Cream::getDescription() const {
    return _previous->getDescription() + " + cream";
}

double Cream::getPrice() const {
    return _previous->getPrice() + 2.0;
}

WhippingCream::WhippingCream(Drink* previous) {
    _previous = previous;
}

std::string WhippingCream::getDescription() const {
    return _previous->getDescription() + " + whipping cream";
}

double WhippingCream::getPrice() const {
    return _previous->getPrice() + 5.0;
}

SomethingSalty::SomethingSalty(Drink* previous) {
    _previous = previous;
}

std::string SomethingSalty::getDescription() const {
    return _previous->getDescription() + " + something salty";
}

double SomethingSalty::getPrice() const {
    return _previous->getPrice() + 4.0;
}
