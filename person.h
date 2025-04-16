#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    string ssn;
    int age;

public:
    Person(string n = "", string s = "", int a = 0);
    virtual ~Person() {}
    
    // Pure virtual function
    virtual void printInfo() const = 0;

    // Getter/Setter
    string getName() const;
    void setName(string n);
    string getSSN() const;
    void setSSN(string s);
    int getAge() const;
    void setAge(int a);
};

#endif
