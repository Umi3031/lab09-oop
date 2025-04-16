#include "employee.h"
#include "division.h"
#include "jobDescription.h"
#include <iostream>
using namespace std;

int main() {
    int empCount;

    // Хэрэглэгчээс нийт ажилтны тоог оруулуулах
    cout << "Enter number of employees: ";
    cin >> empCount;

    // Байгууллагын хэлтсүүд болон ажил үүргийн жагсаалтыг урьдчилан үүсгэх
    vector<Division> divisions = { Division("IT"), Division("HR") };
    vector<JobDescription> jobs = { JobDescription("Developer"), JobDescription("Manager") };

    // Ажилтнуудын жагсаалт (заагч ашиглан хадгална)
    vector<Employee*> employees;

    // Хэрэглэгчээс ажилтны мэдээллийг нэг нэгээр нь асуух
    for (int i = 0; i < empCount; ++i) {
        string name, ssn, id, title, date;
        int age;

        cout << "\nEnter info for Employee #" << (i + 1) << ":\n";
        cout << "Name: "; cin >> name;
        cout << "SSN: "; cin >> ssn;
        cout << "Age: "; cin >> age;
        cout << "Company ID: "; cin >> id;
        cout << "Title: "; cin >> title;
        cout << "Start Date: "; cin >> date;

        // Ажилтны шинэ объект үүсгэх
        Employee* e = new Employee(name, ssn, age, id, title, date);

        // Ажилтныг хэлтэст хуваарилах (давтагдах байдлаар)
        e->setDivision(&divisions[i % divisions.size()]);

        // Ажил үүргийг оноох (давтагдах байдлаар)
        e->addJob(jobs[i % jobs.size()]);

        // Эхнэр/нөхрийн мэдээлэл оруулах
        string anniversary;
        cout << "Enter spouse anniversary date (or '-' if none): ";
        cin >> anniversary;
        if (anniversary != "-")
            e->setSpouse(new Spouse(anniversary)); // Хэрвээ байгаа бол spouse нэмэх

        // Хүүхдийн тоог оруулж, дуртай тоглоомыг бүртгэх
        int childCount;
        cout << "Enter number of children: ";
        cin >> childCount;
        for (int j = 0; j < childCount; ++j) {
            string toy;
            cout << "Favorite toy of child #" << (j + 1) << ": ";
            cin >> toy;
            e->addChild(Child(toy)); // Хүүхэд бүртгэх
        }

        // Ажилтныг жагсаалтанд нэмэх
        employees.push_back(e);
    }

    // Бүх ажилтны мэдээллийг хэвлэх
    for (Employee* e : employees) {
        cout << "\n------ EMPLOYEE INFO ------\n";
        e->printInfo();
    }

    // Нийт ажилтны тоог хэвлэх
    cout << "\nTotal Employees: " << Employee::getEmployeeCount() << endl;

    // Динамик санах ойг чөлөөлөх (clean-up)
    for (Employee* e : employees)
        delete e;

    return 0;
}
