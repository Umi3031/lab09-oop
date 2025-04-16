#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "person.h"
#include "spouse.h"
#include "child.h"
#include "division.h"
#include "jobdescription.h"
#include <vector>

class Employee : public Person {
    string companyID;
    string title;
    string startDate;
    Division* division;
    vector<JobDescription> jobs;
    Spouse* spouse;
    vector<Child> children;

    // Static count of all employees
    static int employeeCount;

public:
    Employee(string n, string s, int a, string id, string t, string d);
    ~Employee();

    void setDivision(Division* d);
    void addJob(JobDescription j);
    void setSpouse(Spouse* s);
    void addChild(Child c);

    void printInfo() const override;

    // Static method
    static int getEmployeeCount();
};

#endif
