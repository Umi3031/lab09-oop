// Division.cpp
#include "division.h"

Division::Division(string name) : divisionName(name) {}

string Division::getDivisionName() const {
    return divisionName;
}

void Division::setDivisionName(const string& name) {
    divisionName = name;
}
