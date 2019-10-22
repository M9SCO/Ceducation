//
// Created by m9sco on 22.10.19.
//

#include <string>
#include <stdio.h>
#include <math.h>
#include "iostream"
#include "error.cpp"
#include "laborer.cpp"

void quest1(){
    float x, z=1;
    int i;
    std::cout << "Send x: ";
    std::cin >> x;
    for ( i=2; i<=10; i++ ){
        z*=( x + i ) / i;
    }
    std::cout << "Result: " << z;

}
