#ifndef DIVISION_H
#define DIVISION_H

#include <string>
using namespace std;

// Division класс нь компанийн нэгж, хэлтсийн нэрийг хадгалах зориулалттай
class Division {
    string divisionName;  // Хэлтсийн нэр

public:
    // Constructor: хэлтсийн нэрийг параметрээр авах ба өөр утга өгөгдөөгүй тохиолдолд хоосон утга авна
    Division(string name = "");

    // Getter: хэлтсийн нэрийг буцаах
    string getDivisionName() const;

    // Setter: хэлтсийн нэрийг шинэчлэх
    void setDivisionName(string name);
};

#endif
