// Spouse.cpp
#include "spouse.h"

Spouse::Spouse(string name, string ssn, int age, string anniversaryDate)
    : Person(name, ssn, age), anniversaryDate(anniversaryDate) {}

string Spouse::getAnniversaryDate() const {
    return anniversaryDate;
}

void Spouse::setAnniversaryDate(const string& date) {
    anniversaryDate = date;
}
