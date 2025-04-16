// child.h
#ifndef CHILD_H
#define CHILD_H

#include "person.h"
#include <string>

class Child : public Person {
private:
    string favoriteToy;

public:
    Child(string name = "", string ssn = "", int age = 0, string toy = "");
    string getFavoriteToy() const;
    void setFavoriteToy(const string&);
};

#endif
