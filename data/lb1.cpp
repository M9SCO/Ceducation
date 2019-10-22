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
    print("X(1) = ");
    std::cin >> x1;
    print("X(2) = ");
    std::cin >>  x2;
    y = calculate_lab1(x1);
    z = calculate_lab1(x2);
//  Копипаст-зло
    std::cout <<  "function for x(1) = " <<y<<" and for x(2) = "<<z;
    return 0;
}

int quest2(){

    print("\n~calculation of the angle between 12 and position hour hand~\nSend digital time\n");

    float h,m,s;
    h = value_for_lb1_q2(23, "hours: ");
    m = value_for_lb1_q2(59, "mins: ");
    s = value_for_lb1_q2(59, "sec: ");
    if (h>=12){
        h-=12;
    }

    float cours_h;
    print("angle between 12 and hour hand: ");
    cours_h = (h*30 +m/6+s/360);
    std::cout << cours_h ;
    return 0;
}