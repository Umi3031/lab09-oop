#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

// Person гэдэг нь хүний үндсэн мэдээллийг хадгалах зориулалттай abstract class юм.
// Энэ классыг шууд ашиглах боломжгүй бөгөөд удамшуулж хэрэглэнэ.
class Person {
protected:
    string name;  // Хүний нэр
    string ssn;   // Хүний Social Security Number (иргэний бүртгэлийн дугаар гэж үзэж болно)
    int age;      // Нас

public:
    // Constructor: утга өгөгдөөгүй үед хоосон нэр, ssn болон 0 насыг ашиглана.
    Person(string n = "", string s = "", int a = 0);

    // Virtual destructor: санах ойг зөв цэвэрлэхэд хэрэгтэй
    virtual ~Person() {}

    // Pure virtual function: энэ функцийг удамшуулсан классууд заавал хэрэгжүүлэх ёстой
    virtual void printInfo() const = 0;

    // Getter ба Setter функцүүд
    string getName() const;     // Нэрийг буцаах
    void setName(string n);     // Нэрийг тохируулах
    string getSSN() const;      // SSN-г буцаах
    void setSSN(string s);      // SSN-г тохируулах
    int getAge() const;         // Нас буцаах
    void setAge(int a);         // Нас тохируулах
};

#endif
