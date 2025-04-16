#include "jobdescription.h"

// Constructor: өгөгдсөн тодорхойлолтыг class-ийн description хувьсагчид онооно
JobDescription::JobDescription(string desc) : description(desc) {}

// description хувьсагчийн одоогийн утгыг буцаана
string JobDescription::getDescription() const {
    return description;
}

// description хувьсагчийн утгыг шинэчилнэ
void JobDescription::setDescription(const string& desc) {
    description = desc;
}
