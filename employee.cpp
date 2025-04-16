// Employee.cpp
#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, string ssn, int age,
                   string companyID, string title, string startDate)
    : Person(name, ssn, age), companyID(companyID), title(title), startDate(startDate),
      division(nullptr), spouse(nullptr) {}

void Employee::setDivision(Division* div) {
    division = div;
}

void Employee::addJobDescription(const JobDescription& jd) {
    jobDescriptions.push_back(jd);
}

void Employee::setSpouse(Spouse* s) {
    spouse = s;
}

void Employee::addChild(const Child& c) {
    children.push_back(c);
}

void Employee::printInfo() const {
    cout << "Employee: " << name << ", SSN: " << ssn << ", Age: " << age << endl;
    cout << "CompanyID: " << companyID << ", Title: " << title << ", Start Date: " << startDate << endl;

    if (division)
        cout << "Division: " << division->getDivisionName() << endl;

    cout << "Job Descriptions: ";
    for (const auto& jd : jobDescriptions)
        cout << jd.getDescription() << "; ";
    cout << endl;

    if (spouse)
        cout << "Spouse: " << spouse->getName() << ", Anniversary: " << spouse->getAnniversaryDate() << endl;

    for (const auto& child : children)
        cout << "Child: " << child.getName() << ", Favorite Toy: " << child.getFavoriteToy() << endl;

    cout << "-----------------------------" << endl;
}
