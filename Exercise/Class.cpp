#include <iostream>
#include <string>

// Base class
class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age) : name(name), age(age) {}

    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    virtual ~Animal() {}
};

// Derived class
class Dog : public Animal {
private:
    std::string breed;

public:
    Dog(const std::string& name, int age, const std::string& breed) 
        : Animal(name, age), breed(breed) {}

    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }

    void displayInfo() const {
        Animal::displayInfo();
        std::cout << "Breed: " << breed << std::endl;
    }
};

// Another derived class
class Cat : public Animal {
private:
    std::string color;

public:
    Cat(const std::string& name, int age, const std::string& color) 
        : Animal(name, age), color(color) {}

    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }

    void displayInfo() const {
        Animal::displayInfo();
        std::cout << "Color: " << color << std::endl;
    }
};


class Creature : public Animal {
public:
    Creature(const std::string& name, int age) : Animal(name, age) {}

    
};

int main() {
    Animal* animals[4];
    animals[0] = new Dog("Buddy", 3, "Golden Retriever");
    animals[1] = new Cat("Whiskers", 2, "Black");
    animals[2] = new Creature("Creature", 1);
    animals[3] = new Creature("Creature", 2);


    for (int i = 0; i < 4; ++i) {
        animals[i]->makeSound();
        animals[i]->displayInfo();
        delete animals[i];
    }

    return 0;
}