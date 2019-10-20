//
// Created by m9sco on 20.10.19.
//

#include <math.h>
#include <stdio.h>
#include <string>
#include "list"
#include "iostream"

float calculate_lab1(int in){
    float a, b, inp;
    a = 2.7;
    b = 1.7;
    inp = a*a / (in + 2)*exp (-(b*in*in)) + log10(a + b*in);
    return inp;
}
