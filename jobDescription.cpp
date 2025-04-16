// JobDescription.cpp
#include "JobDescription.h"

JobDescription::JobDescription(string desc) : description(desc) {}

string JobDescription::getDescription() const {
    return description;
}

void JobDescription::setDescription(const string& desc) {
    description = desc;
}
