#include "spouse.h"
#include "person.h"  // Удамшсан тул Person-ыг include хийв
#include <iostream>

// Constructor: Person классын гишүүдийг эхэлж оноож, дараа нь anniversaryDate-г онооно
Spouse::Spouse(string name, string ssn, int age, string anniversaryDate)
    : Person(name, ssn, age), anniversaryDate(anniversaryDate) {}

// Гэрлэлт ойг буцаана
string Spouse::getAnniversaryDate() const {
    return anniversaryDate;
}

// Гэрлэлт ойг шинэчилж хадгална
void Spouse::setAnniversaryDate(const string& date) {
    anniversaryDate = date;
}

// Person классын pure virtual функц - энэ класст мэдээлэл хэвлэх зориулалттай
void Spouse::printInfo() const {
    cout << "Name: " << getName() << endl;
    cout << "SSN: " << getSSN() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Anniversary Date: " << anniversaryDate << endl;
}
