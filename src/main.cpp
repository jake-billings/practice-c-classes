#include <iostream>
#include <vector>

#include "Dog.h"

int main() {
    //Create a human object to begin our adventure. His name is Jeff, and he will own the dogs.
    Human h = Human("Jeff");
    std::cout << "Our story begins with a human named " << h.getName() << "." << std::endl;

    //Create five normal dogs with normal heights for Jeff to own.
    Dog d1 = Dog("Fido", 12, h);
    Dog d2 = Dog("Fido_2", 14, h);
    Dog d3 = Dog("Fido_3", 11, h);
    Dog d4 = Dog("Fido_4", 110, h);
    Dog d5 = Dog("Fido_5", 4, h);

    //Create one mystery dog that we will have to search for later.
    std::string mysteryDogName = "Mystery Dog";
    Dog d6 = Dog(mysteryDogName, 32, h);

    //Add all the dogs to a vector.
    std::vector<Dog> dogs;
    dogs.push_back(d1);
    dogs.push_back(d2);
    dogs.push_back(d3);
    dogs.push_back(d4);
    dogs.push_back(d5);
    dogs.push_back(d6);

    //Count how many dogs Jeff owns.
    std::cout << h.getName() << " owns " << dogs.size() << " dogs." << std::endl;

    //Using bubble sort, arrange dogs from tallest to shortest in the dogs vector.
    for (unsigned long i = 0; i<dogs.size(); i++) {
        for (unsigned long j = 0; j<dogs.size()-1; j++) {
            Dog d = dogs[j];
            if (d.getHeight() < dogs.at(j+1).getHeight()) {
                dogs[j] = dogs[j+1];
                dogs[j+1] = d;
            }
        }
    }

    //Record the tallest and shortest dog by accessing the first and last elements of the array after sorting it.
    std::cout << "The tallest dog is " << dogs[0].getName() << ". " << dogs[0].getName() << " is " << dogs[0].getHeight() << " units tall." << std::endl;
    std::cout << "The shortest dog is " << dogs[dogs.size()-1].getName() << ". " << dogs[dogs.size()-1].getName() << " is " << dogs[dogs.size()-1].getHeight() << " units tall." << std::endl;

    //Announce the upcoming search for the mystery dog.
    std::cout << h.getName() << " is missing a dog. Its name is " << mysteryDogName << "." << std::endl;

    //Loop through the dogs array to find the mystery dog.
    // The mystery dog has a specific name that allows us to find it.
    Dog* mysteryDog = 0;
    for (unsigned long i = 0; i<dogs.size(); i++) {
        if (dogs[i].getName()==mysteryDogName) {
            mysteryDog = &dogs[i];
        }
    }

    //If we found the mystery dog, announce its height. If we didn't find it, announce that we couldn't find it.
    if (mysteryDog) {
        std::cout << "Found the mystery dog. It's " << mysteryDog->getHeight() << " units tall." << std::endl;
    } else {
        std::cout << "Couldn't find that mysterious dog." << std::endl;
    }

    //Return 0 because everything went smoothly.
    return 0;
}