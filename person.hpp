#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string address;

public:
    Person(std::string n, int a, std::string addr) 
        : name(n), age(a), address(addr) {}

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getAddress() const { return address; }

    // Setters
    void setName(const std::string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setAddress(const std::string& addr) { address = addr; }

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age 
                 << ", Address: " << address << std::endl;
    }
};

#endif