#ifndef SPOUSE_H
#define SPOUSE_H

#include <string>
using namespace std;

class Spouse {
    string anniversaryDate;

public:
    Spouse(string d = "");
    string getAnniversaryDate() const;
    void setAnniversaryDate(string d);
};

#endif
