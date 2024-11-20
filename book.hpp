#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publishedYear;

public:
    Book(std::string t = "", std::string a = "", int y = 0) 
        : title(t), author(a), publishedYear(y) {}

    void display() const {
        std::cout << "Title: " << title << ", Author: " << author 
                 << ", Year: " << publishedYear << std::endl;
    }

    // Getters
    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    int getPublishedYear() const { return publishedYear; }
};

#endif