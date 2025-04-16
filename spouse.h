#ifndef SPOUSE_H
#define SPOUSE_H

#include "person.h"  // Person классыг ашиглахын тулд оруулж ирж байна
#include <string>
using namespace std;

// Spouse класс нь Person классыг удамшуулж, гэрлэсэн хүний нэмэлт мэдээлэл хадгална.
class Spouse : public Person {
    string anniversaryDate;  // Гэрлэлтийн ой тэмдэглэсэн огноо

public:
    // Constructor: нэр, ssn, нас болон гэрлэлт ойг өгч болно
    Spouse(string name = "", string ssn = "", int age = 0, string anniversaryDate = "");

    // Getter ба Setter функцүүд
    string getAnniversaryDate() const;             // Гэрлэлт ойг буцаах
    void setAnniversaryDate(string anniversaryDate); // Гэрлэлт ойг шинэчлэх

    // Person классын pure virtual функцийг хэрэгжүүлнэ
    void printInfo() const override;
};

#endif
