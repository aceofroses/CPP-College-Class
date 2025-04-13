#include <iostream>
#include "Time.h"


int main() {
    Time t1(2, 45);
    Time t2(1, 30);
    Time t3;
    t3 = t1 + t2;
    std::cout << "Time 1: ";
    t1.display();
    std::cout << "Time 2: ";
    t2.display();
    std::cout << "Time 3 (sum): ";
    t3.display();
    return 0;
    }