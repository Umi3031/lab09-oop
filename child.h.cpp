#ifndef CHILD_H
#define CHILD_H

#include <string>
using namespace std;

class Child {
    string favoriteToy;

public:
    Child(string toy = "");
    string getFavoriteToy() const;
    void setFavoriteToy(string toy);
};

#endif
