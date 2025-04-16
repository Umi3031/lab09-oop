#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"        // Person классыг оруулж ирэх (ажилтны үндсэн мэдээллийг хадгалах)
#include "spouse.h"         // Spouse классыг оруулж ирэх (эхнэр, нөхрийн мэдээлэл)
#include "child.h"          // Child классыг оруулж ирэх (хүүхдийн мэдээлэл)
#include "division.h"       // Division классыг оруулж ирэх (хэлтсийн нэр)
#include "jobdescription.h" // JobDescription классыг оруулж ирэх (ажил үүргийн тодорхойлолт)
#include <vector>           // Тэмдэглэлийн жагсаалт ашиглах

// Employee класс нь Person классаас удамшин, ажилтны талаар илүү дэлгэрэнгүй мэдээллийг хадгална
class Employee : public Person {
    string companyID;            // Ажилтны компанийн ID
    string title;                // Ажилтны ажлын байрны нэр
    string startDate;            // Ажилд орсон огноо
    Division* division;          // Хэлтсийн мэдээлэл (Division класс)
    vector<JobDescription> jobs; // Ажил үүргийн тодорхойлолт (JobDescription классын жагсаалт)
    Spouse* spouse;              // Эхнэр, нөхрийн мэдээлэл (Spouse класс)
    vector<Child> children;      // Хүүхдийн мэдээлэл (Child классын жагсаалт)

    // Static count: бүх ажилтнуудын тоо
    static int employeeCount;    // Хамгийн сүүлийн нийт ажилтнуудын тоо

public:
    // Constructor: ажилтны үндсэн мэдээлэл болон бусад мэдээг инициализ хийх
    Employee(string n, string s, int a, string id, string t, string d);

    // Destructor: хамааралтай обьектуудыг чөлөөлнө
    ~Employee();

    // Хэлтсийн мэдээллийг тохируулах
    void setDivision(Division* d);

    // Ажил үүргийн тодорхойлолт нэмэх
    void addJob(JobDescription j);

    // Эхнэр, нөхрийн мэдээллийг тохируулах
    void setSpouse(Spouse* s);

    // Хүүхэд нэмэх
    void addChild(Child c);

    // Ажилтны бүх мэдээллийг хэвлэх (харуулах)
    void printInfo() const override;

    // Static method: Ажилтнуудын нийт тоог буцаах
    static int getEmployeeCount();
};

#endif
