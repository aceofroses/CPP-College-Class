#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include "Book.h"
#include "Media.h"
#include <iostream>

class LibraryItem : public Book, public Media
{
    private:
        int id;
        std::string status;
    public:
        LibraryItem(std::string a, std::string t, std::string f, int i, std::string s) : Book(a, t), Media(f), id(i), status(s)
        {};

        void display() const
        {
            Book::display();
            Media::display();
            std::cout << "ID: " << id << std::endl;
            std::cout << "Status: " <<status << std::endl;

        }


};
#endif