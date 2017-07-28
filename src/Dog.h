//
// Created by Jake Billings on 7/28/17.
//

#ifndef PRACTICE_C_CLASSES_DOG_H
#define PRACTICE_C_CLASSES_DOG_H

#include <string>
#include "Human.h"


class Dog {
private:
    std::string name;
    unsigned int height;
    Human owner;

public:
    Dog(const std::string &name, unsigned int height, const Human &owner);

    unsigned int getHeight() const;

    void setHeight(unsigned int height);

    const std::string &getName() const;

    void setName(const std::string &name);

    const Human &getOwner() const;

    void setOwner(const Human &owner);
};


#endif //PRACTICE_C_CLASSES_DOG_H
