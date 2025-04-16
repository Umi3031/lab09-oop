#include "child.h"
#include <iostream>

// Constructor: Person классын гишүүд болон favoriteToy-г инициализ хийж өгнө
Child::Child(string name, string ssn, int age, string toy)
    : Person(name, ssn, age), favoriteToy(toy) {}

// Getter функц: дуртай тоглоомын нэрийг буцаана
string Child::getFavoriteToy() const {
    return favoriteToy;
}

// Setter функц: дуртай тоглоомын нэрийг шинэчилнэ
void Child::setFavoriteToy(const string& toy) {
    favoriteToy = toy;
}

// Person классын printInfo() виртуал функцийг хэрэгжүүлнэ
void Child::printInfo() const {
    cout << "Name: " << getName() << endl;
    cout << "SSN: " << getSSN() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Favorite Toy: " << favoriteToy << endl;
}
