#include <iostream>
#include <vector>
#include "book.hpp"
#include "person.hpp"
#include "animal.hpp"
#include "complex.hpp"
#include "filemanager.hpp"
#include "shape.hpp"

int main() {
    // Question 1: Book array demonstration
    Book books[3] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925),
        Book("1984", "George Orwell", 1949),
        Book("To Kill a Mockingbird", "Harper Lee", 1960)
    };

    std::cout << "\nBook Details:" << std::endl;
    for (const auto& book : books) {
        book.display();
    }

    // Question 2: Person objects demonstration
    std::vector<Person> people = {
        Person("John Doe", 25, "123 Main St"),
        Person("Jane Smith", 30, "456 Oak Ave"),
        Person("Bob Johnson", 35, "789 Pine Rd")
    };

    std::cout << "\nPerson Details:" << std::endl;
    for (const auto& person : people) {
        person.display();
    }

    // Question 3 & 4: Animal hierarchy demonstration
    Dog dog("Rex");
    Cat cat("Whiskers");
    Animal* animals[] = {&dog, &cat};

    std::cout << "\nAnimal Sounds:" << std::endl;
    for (Animal* animal : animals) {
        animal->makeSound();
        animal->displayDetails();
    }

    // Question 5: Complex number subtraction
    Complex c1(5, 3);
    Complex c2(2, 1);
    Complex result = c1 - c2;

    std::cout << "\nComplex Number Subtraction:" << std::endl;
    std::cout << "First number: ";
    c1.display();
    std::cout << "Second number: ";
    c2.display();
    std::cout << "Result: ";
    result.display();

    // Question 6: File handling demonstration
    FileManager fm;
    std::cout << "\nFile Operations:" << std::endl;
    try {
        std::string content = fm.readFile("test.txt");
        std::cout << "File content: " << content;
    } catch (const std::runtime_error& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Question 7: Shape hierarchy demonstration
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Shape* shapes[] = {&circle, &rectangle};

    std::cout << "\nShape Details:" << std::endl;
    for (Shape* shape : shapes) {
        shape->draw();
        std::cout << "Area: " << shape->area() << std::endl;
    }

    return 0;
}