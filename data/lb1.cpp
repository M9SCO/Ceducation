//
// Created by m9sco on 20.10.19.
// lb1.cpp
//

#include <math.h>
#include <stdio.h>
#include <string>
#include "list"
#include "iostream"
#include "error.cpp"
#include "laborer.cpp"

int quest1()
{
    std::cout << "\n~Calculating a function by a given formula~\n"
                 "Formula: a^2/(x+2)*e^-(bx^2)+ln(a+bx)\n";
    int x1, x2;
    float y, z;
    std::cout <<  ("X(1) = ");
    std::cin >> x1;
    std::cout <<  ("X(2) = ");
    std::cin >>  x2;
    y = calculate_lab1(x1);
    z = calculate_lab1(x2);
//  Копипаст-зло
    std::cout <<  "function for x(1) = " <<y<<" and for x(2) = "<<z;
    return 0;
}

int quest2(){

    std::cout << "\n~calculation of the angle between 12 and position hour hand~\nSend digital time\n";

    float h,m,s;
    std::cout << "hours: ";
    std::cin >> h;
    if (h>23)
    {
        std::cout << Error().value;
        return 0;
    }
    std::cout << ("min: ");
    std::cin >> m;
    if (m> 59){
        std::cout << Error().value;
        return 0;
    }
    std::cout << ("sec: ");
    std::cin >> s;
    if (s>59) {
        std::cout << Error().value;
        return 0;
    }
    if (h>=12){
        h-=12;
    }

    m = m/60;
    s = s/60;
    float cours_h;

    cours_h = h*30 +(30*m)+30*s/12;
    std::cout << "angle between 12 and hour hand: " << cours_h;
    return 0;
}
