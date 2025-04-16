#include "employee.h"
#include "division.h"
#include "jobDescription.h"
#include <iostream>
using namespace std;

int main() {
    int empCount;
    cout << "Enter number of employees: ";
    cin >> empCount;

    vector<Division> divisions = { Division("IT"), Division("HR") };
    vector<JobDescription> jobs = { JobDescription("Developer"), JobDescription("Manager") };
    vector<Employee*> employees;

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

        Employee* e = new Employee(name, ssn, age, id, title, date);
        e->setDivision(&divisions[i % divisions.size()]);
        e->addJob(jobs[i % jobs.size()]);

        // Spouse
        string anniversary;
        cout << "Enter spouse anniversary date (or '-' if none): ";
        cin >> anniversary;
        if (anniversary != "-")
            e->setSpouse(new Spouse(anniversary));

        // Children
        int childCount;
        cout << "Enter number of children: ";
        cin >> childCount;
        for (int j = 0; j < childCount; ++j) {
            string toy;
            cout << "Favorite toy of child #" << (j + 1) << ": ";
            cin >> toy;
            e->addChild(Child(toy));
        }

        employees.push_back(e);
    }

    // Output all
    for (Employee* e : employees) {
        cout << "\n------ EMPLOYEE INFO ------\n";
        e->printInfo();
    }

    cout << "\nTotal Employees: " << Employee::getEmployeeCount() << endl;

    // Clean up
    for (Employee* e : employees)
        delete e;

    return 0;
}
