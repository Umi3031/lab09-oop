#include "person.h"

// Constructor-ийн хэрэгжүүлэлт
// name, ssn, age гэсэн утгуудыг class-ийн гишүүн хувьсагчдад оноож өгнө.
Person::Person(string name, string ssn, int age)
    : name(name), ssn(ssn), age(age) {}

// Гишүүн функцүүдийн хэрэгжүүлэлт

// Нэрийг буцаах
string Person::getName() const {
    return name;
}

// SSN-г буцаах
string Person::getSSN() const {
    return ssn;
}

// Нас буцаах
int Person::getAge() const {
    return age;
}

// Нэрийг шинэчилж оноох
void Person::setName(const string& newName) {
    name = newName;
}

// SSN-г шинэчилж оноох
void Person::setSSN(const string& newSSN) {
    ssn = newSSN;
}

// Насыг шинэчилж оноох
void Person::setAge(int newAge) {
    age = newAge;
}
