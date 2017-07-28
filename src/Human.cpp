//
// Created by Jake Billings on 7/28/17.
//

#include "Human.h"


const std::string &Human::getName() const {
    return Human::name;
}

void Human::setName(const std::string &name) {
   Human::name = name;
}

Human::Human(const std::string &name) : name(name) {}