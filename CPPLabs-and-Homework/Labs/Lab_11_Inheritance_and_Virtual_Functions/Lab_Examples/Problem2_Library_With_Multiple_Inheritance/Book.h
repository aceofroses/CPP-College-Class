#ifndef BOOK_H
#define BOOK_H
#include <iostream>

class Book 
{
    private:
        std::string author;
        std::string title;
    public:
        Book(std::string a, std::string t) : author(a), title(t)
        {};

        void display() const
        {
            std::cout << "Author: " << author << std::endl
                      << "Title:  " << title << std::endl;
        }
};

#endif