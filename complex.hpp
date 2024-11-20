#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        std::cout << real;
        if (imag >= 0) std::cout << " + ";
        std::cout << imag << "i" << std::endl;
    }
};

#endif