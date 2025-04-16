// Child.cpp
#include "child.h"

Child::Child(string name, string ssn, int age, string toy)
    : Person(name, ssn, age), favoriteToy(toy) {}

string Child::getFavoriteToy() const {
    return favoriteToy;
}

void Child::setFavoriteToy(const string& toy) {
    favoriteToy = toy;
}
