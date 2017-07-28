//
// Created by Jake Billings on 7/28/17.
//

#include "Dog.h"

const std::string &Dog::getName() const {
    return this->name;
}

void Dog::setName(const std::string &name) {
    this->name = name;
}

unsigned int Dog::getHeight() const {
    return this->height;
}

void Dog::setHeight(unsigned int height) {
    this->height = height;
}

const Human &Dog::getOwner() const {
    return owner;
}

void Dog::setOwner(const Human &owner) {
    Dog::owner = owner;
}

Dog::Dog(const std::string &name, unsigned int height, const Human &owner) : name(name), height(height), owner(owner) {}
