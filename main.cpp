#include "employee.h"          // Ажилтны классын толгойн файл
#include "division.h"          // Хэлтсийн классын толгойн файл
#include "jobDescription.h"    // Ажил үүргийн тодорхойлолтын класс
#include <iostream>            // Оролт, гаралтын стандарт номын сан
using namespace std;

int main() {
    int empCount;

    // Хэрэглэгчээс нийт хэдэн ажилтны мэдээлэл оруулахыг асууж байна
    cout << "Enter number of employees: ";
    cin >> empCount;

    // Байгууллагын хоёр хэлтэс үүсгэж байна: IT ба HR
    vector<Division> divisions = { Division("IT"), Division("HR") };

    // Хоёр төрлийн ажил үүргийн тодорхойлолт үүсгэж байна
    vector<JobDescription> jobs = { JobDescription("Developer"), JobDescription("Manager") };

    // Ажилтны мэдээллийг хадгалах динамик заагч вектор
    vector<Employee*> employees;

    // Ажилтнуудын мэдээллийг нэг нэгээр нь хэрэглэгчээс авч байна
    for (int i = 0; i < empCount; ++i) {
        string name, ssn, id, title, date;
        int age;

        cout << "\nEnter info for Employee #" << (i + 1) << ":\n";

        // Ажилтны үндсэн мэдээллийг оруулах
        cout << "Name: "; cin >> name;
        cout << "SSN: "; cin >> ssn;
        cout << "Age: "; cin >> age;
        cout << "Company ID: "; cin >> id;
        cout << "Title: "; cin >> title;
        cout << "Start Date: "; cin >> date;

        // Ажилтны объект үүсгэж, санах ойд хадгалах
        Employee* e = new Employee(name, ssn, age, id, title, date);

        // Ажилтныг аль нэг хэлтэст хуваарилах (дарааллын дагуу)
        e->setDivision(&divisions[i % divisions.size()]);

        // Ажилтанд үүрэг хариуцлага нэмэх
        e->addJob(jobs[i % jobs.size()]);

        // Эхнэр/нөхрийн талаарх мэдээллийг оруулах хэсэг
        string anniversary;
        cout << "Enter spouse anniversary date (or '-' if none): ";
        cin >> anniversary;

        // Хэрвээ '-' биш бол spouse объект үүсгэж ажилтанд онооно
        if (anniversary != "-")
            e->setSpouse(new Spouse(anniversary));

        // Хүүхдүүдийн тоог асууж, бүртгэж байна
        int childCount;
        cout << "Enter number of children: ";
        cin >> childCount;

        // Хүүхэд бүрийн дуртай тоглоомыг оруулж, объект болгон нэмэх
        for (int j = 0; j < childCount; ++j) {
            string toy;
            cout << "Favorite toy of child #" << (j + 1) << ": ";
            cin >> toy;
            e->addChild(Child(toy));
        }

        // Ажилтныг нийт ажилтны жагсаалтанд нэмэх
        employees.push_back(e);
    }

    // Бүх ажилтнуудын мэдээллийг хэвлэж гаргах
    for (Employee* e : employees) {
        cout << "\n------ EMPLOYEE INFO ------\n";
        e->printInfo();
    }

    // Нийт ажилтнуудын тоог харуулах (static гишүүн функц ашиглаж)
    cout << "\nTotal Employees: " << Employee::getEmployeeCount() << endl;

    // Динамик санах ойг цэвэрлэж, заагчдыг устгаж байна
    for (Employee* e : employees)
        delete e;

    return 0;
}
