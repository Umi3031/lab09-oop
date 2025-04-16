#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

#include <string>
using namespace std;

class JobDescription {
    string description;

public:
    JobDescription(string d = "");
    string getDescription() const;
    void setDescription(string d);
};

#endif
