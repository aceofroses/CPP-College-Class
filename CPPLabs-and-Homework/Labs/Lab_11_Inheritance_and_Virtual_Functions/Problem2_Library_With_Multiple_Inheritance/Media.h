#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>

class Media
{
    private:
        std::string format;
    public: 
    Media(std::string f) : format(f)
    {};

    void display() const
    {
        std::cout << "Format: " << format << std::endl;
    }

};

#endif