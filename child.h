#ifndef CHILD_H
#define CHILD_H

#include "person.h"    // Person классыг удамшуулахын тулд оруулж ирнэ
#include <string>
using namespace std;

// Child класс нь Person-оос удамшиж, хүүхдийн дуртай тоглоомын мэдээллийг хадгална.
class Child : public Person {
    string favoriteToy;  // Хүүхдийн дуртай тоглоом

public:
    // Constructor: Нэр, SSN, нас, дуртай тоглоомыг параметрээр хүлээн авна
    Child(string name = "", string ssn = "", int age = 0, string toy = "");

    // Getter: дуртай тоглоомын нэрийг буцаана
    string getFavoriteToy() const;

    // Setter: дуртай тоглоомыг шинэчлэх
    void setFavoriteToy(string toy);

    // Person классын цэвэр виртуал функцийн хэрэгжилт
    void printInfo() const override;
};

#endif
