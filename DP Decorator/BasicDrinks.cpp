#include "BasicDrinks.h"

std::string Coffee::getDescription() const {
    return "Coffee";
}

double Coffee::getPrice() const {
    return 10.0;
}

std::string Espresso::getDescription() const {
    return "Espresso";
}

double Espresso::getPrice() const {
    return 14.0;
}
std::string Tea::getDescription() const {
    return "Tea";
}

double Tea::getPrice() const {
    return 10.0;
}
std::string HotChocolate::getDescription() const {
    return "Hot Chocolate";
}

double HotChocolate::getPrice() const {
    return 12.0;
}
