#ifndef TIME_H
#define TIME_H
#include <iostream>

class Time
{
    private:
    int hours, minutes;

    public:

    //Constructor that sets hours and minutes to zero if there's no argument
    Time (int argHours = 0, int argMinutes = 0)
    {
        hours = argHours + (argMinutes / 60);
        minutes = argMinutes % 60;
    }

    ~Time()
    {
        std::cout << "Destructor called for object" << std::endl;
    }

    void display()
    { std::cout << hours << ":" << minutes << std::endl;}

    Time operator+(const Time &right ) const
    {
        int totalMinutes = (hours + right.hours) * 60 + (minutes + right.minutes);
        return Time(totalMinutes / 60, totalMinutes % 60);
    }

};



#endif