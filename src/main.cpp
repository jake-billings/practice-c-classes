#include <iostream>
#include <vector>

#include "Dog.h"

int main() {
    Human h = Human("Jeff");
    std::cout << "Our story begins with a human named " << h.getName() << "." << std::endl;

    Dog d1 = Dog("Fido", 12, h);
    Dog d2 = Dog("Fido_2", 14, h);
    Dog d3 = Dog("Fido_3", 11, h);
    Dog d4 = Dog("Fido_4", 110, h);
    Dog d5 = Dog("Fido_5", 4, h);

    std::string mysteryDogName = "Mystery Dog";
    Dog d6 = Dog(mysteryDogName, 32, h);

    std::vector<Dog> dogs;
    dogs.push_back(d1);
    dogs.push_back(d2);
    dogs.push_back(d3);
    dogs.push_back(d4);
    dogs.push_back(d5);
    dogs.push_back(d6);

    std::cout << h.getName() << " owns " << dogs.size() << " dogs." << std::endl;

    for (unsigned long i = 0; i<dogs.size(); i++) {
        for (unsigned long j = 0; j<dogs.size()-1; j++) {
            Dog d = dogs[j];
            if (d.getHeight() < dogs.at(j+1).getHeight()) {
                dogs[j] = dogs[j+1];
                dogs[j+1] = d;
            }
        }
    }

    std::cout << "The tallest dog is " << dogs[0].getName() << ". " << dogs[0].getName() << " is " << dogs[0].getHeight() << " units tall." << std::endl;
    std::cout << "The shortest dog is " << dogs[dogs.size()-1].getName() << ". " << dogs[dogs.size()-1].getName() << " is " << dogs[dogs.size()-1].getHeight() << " units tall." << std::endl;

    std::cout << h.getName() << " is missing a dog. Its name is " << mysteryDogName << "." << std::endl;

    Dog* mysteryDog = 0;
    for (unsigned long i = 0; i<dogs.size(); i++) {
        if (dogs[i].getName()==mysteryDogName) {
            mysteryDog = &dogs[i];
        }
    }

    if (mysteryDog) {
        std::cout << "Found the mystery dog. It's " << mysteryDog->getHeight() << " units tall." << std::endl;
    } else {
        std::cout << "Couldn't find that mysterious dog." << std::endl;
    }

    return 0;
}