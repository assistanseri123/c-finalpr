#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
private:
    std::string name;
    std::string sound;

protected:
    void setSound(const std::string& s) { sound = s; }

public:
    Animal(const std::string& n) : name(n) {}
    virtual ~Animal() = default;

    void setName(const std::string& n) { name = n; }
    std::string getName() const { return name; }
    std::string getSound() const { return sound; }

    virtual void makeSound() = 0;
    virtual void displayDetails() = 0;
};

class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {
        setSound("Woof!");
    }

    void makeSound() override {
        std::cout << getName() << " says: " << getSound() << std::endl;
    }

    void displayDetails() override {
        std::cout << "Dog - Name: " << getName() 
                 << ", Sound: " << getSound() << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {
        setSound("Meow!");
    }

    void makeSound() override {
        std::cout << getName() << " says: " << getSound() << std::endl;
    }

    void displayDetails() override {
        std::cout << "Cat - Name: " << getName() 
                 << ", Sound: " << getSound() << std::endl;
    }
};

#endif