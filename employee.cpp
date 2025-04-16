#include "employee.h"
#include <iostream>
using namespace std;

// Constructor: Ажилтны мэдээлэл болон бусад хэсгүүдийг инициализ хийх
Employee::Employee(string name, string ssn, int age,
                   string companyID, string title, string startDate)
    : Person(name, ssn, age), companyID(companyID), title(title), startDate(startDate),
      division(nullptr), spouse(nullptr) {}

// Destructor: Обьектуудыг чөлөөлөх шаардлага байхгүй учир `nullptr` дээр ажиллаж байгаа
Employee::~Employee() {}

// Хэлтсийн мэдээллийг тохируулах (Division объект)
void Employee::setDivision(Division* div) {
    division = div;
}

// Ажил үүргийн тодорхойлолтыг нэмэх (JobDescription объект)
void Employee::addJob(JobDescription j) {
    jobs.push_back(j);
}

// Эхнэр, нөхрийн мэдээллийг тохируулах (Spouse объект)
void Employee::setSpouse(Spouse* s) {
    spouse = s;
}

// Хүүхдийг нэмэх (Child объект)
void Employee::addChild(Child c) {
    children.push_back(c);
}

// Ажилтны бүх мэдээллийг хэвлэх
void Employee::printInfo() const {
    // Ажилтны үндсэн мэдээлэл
    cout << "Employee: " << name << ", SSN: " << ssn << ", Age: " << age << endl;
    cout << "CompanyID: " << companyID << ", Title: " << title << ", Start Date: " << startDate << endl;

    // Хэлтсийн мэдээлэл (хэрвээ байгаа бол)
    if (division)
        cout << "Division: " << division->getDivisionName() << endl;

    // Ажил үүргийн тодорхойлолт
    cout << "Job Descriptions: ";
    for (const auto& jd : jobs)
        cout << jd.getDescription() << "; ";
    cout << endl;

    // Эхнэр, нөхрийн мэдээлэл (хэрвээ байгаа бол)
    if (spouse)
        cout << "Spouse: " << spouse->getName() << ", Anniversary: " << spouse->getAnniversaryDate() << endl;

    // Хүүхдийн мэдээлэл
    for (const auto& child : children)
        cout << "Child: " << child.getName() << ", Favorite Toy: " << child.getFavoriteToy() << endl;

    // Дүгнэлт
    cout << "-----------------------------" << endl;
}

// Static method: Ажилтнуудын нийт тоог буцаах
int Employee::getEmployeeCount() {
    return employeeCount;
}
