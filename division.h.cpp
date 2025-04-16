#ifndef DIVISION_H
#define DIVISION_H

#include <string>
using namespace std;

class Division {
    string divisionName;

public:
    Division(string name = "");
    string getDivisionName() const;
    void setDivisionName(string name);
};

#endif
