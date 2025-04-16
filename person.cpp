// Person.cpp
#include "person.h"

Person::Person(string name, string ssn, int age)
    : name(name), ssn(ssn), age(age) {}

string Person::getName() const {
    return name;
}

string Person::getSSN() const {
    return ssn;
}

int Person::getAge() const {
    return age;
}

void Person::setName(const string& newName) {
    name = newName;
}

void Person::setSSN(const string& newSSN) {
    ssn = newSSN;
}

void Person::setAge(int newAge) {
    age = newAge;
}
