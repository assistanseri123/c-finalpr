#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <cmath>

class Shape {
public:
    virtual double area() = 0;
    virtual void draw() = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return M_PI * radius * radius;
    }

    void draw() override {
        std::cout << "Drawing a circle with radius " << radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }

    void draw() override {
        std::cout << "Drawing a rectangle with width " << width 
                 << " and height " << height << std::endl;
    }
};

#endif