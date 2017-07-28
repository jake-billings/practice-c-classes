//
// Created by Jake Billings on 7/28/17.
//

#ifndef PRACTICE_C_CLASSES_HUMAN_H
#define PRACTICE_C_CLASSES_HUMAN_H

#include <string>


class Human {
private:
    std::string name;
public:
    Human(const std::string &name);

    const std::string &getName() const;

    void setName(const std::string &name);
};

#endif //PRACTICE_C_CLASSES_HUMAN_H
