#ifndef JOBDESCRIPTION_H
#define JOBDESCRIPTION_H

#include <string>
using namespace std;

// JobDescription класс нь ажил үүргийн тодорхойлолтыг хадгалах зориулалттай тусдаа класс юм.
class JobDescription {
    string description;  // Ажил үүргийн тодорхойлолт

public:
    // Constructor: анхдагч утга өгөгдөөгүй тохиолдолд хоосон string ашиглана
    JobDescription(string d = "");

    // Getter функц: ажил үүргийн тодорхойлолтыг буцаана
    string getDescription() const;

    // Setter функц: ажил үүргийн тодорхойлолтыг шинэчилнэ
    void setDescription(string d);
};

#endif
