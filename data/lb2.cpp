//
// Created by m9sco on 20.10.19.
//

#include <math.h>
#include <stdio.h>
#include <string>
#include "iostream"
#include "error.cpp"
#include "laborer.cpp"

void quest1()
{
    std::cout << "\n~Calculate the value of the function depending on the interval in which the argument entered from the keyboard falls~\n";
    float a = 1.8, b=-0.5, c=3.5, x, y;
    std::cout << "value:";
    std::cin >> x;
    if (x>=1.2){
        y = a/x+b*x*x-c;
    } else {
        y = (a+b*x)/sqrt(x+1);
    }
    std::cout << "y = " << y;
}
void quest2()
{
    std::string end, k, z;
    std::cout << "\n~Opredelyt' okon4anie pri ykazanii vozrasta~\n";
    std::cout << "Tvoi vozrast:";
    std::cin >> z;
    k = z.back();
    if (k == "0" || k == "5" || k == "6"|| k == "7"|| k == "8" || k == "9"){end = "let";}
    else if (k == "1"){end = "god";}
    else{end = "goda";}
    std::cout << "Tebe " << z<< " " << end;
    }