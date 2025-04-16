#include "division.h"

// Constructor: divisionName хувьсагчийг өгөгдсөн нэрээр инициализ хийж байна
Division::Division(string name) : divisionName(name) {}

// Getter: хэлтсийн нэрийг буцаах
string Division::getDivisionName() const {
    return divisionName;
}

// Setter: хэлтсийн нэрийг шинэчлэх
void Division::setDivisionName(const string& name) {
    divisionName = name;
}
