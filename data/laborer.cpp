//
// Created by m9sco on 20.10.19.
//

#include <math.h>
#include <stdio.h>
#include <string>
#include "list"
#include "iostream"

using namespace std;

float calculate_lab1(int &in) {
    float a, b, inp;
    a = 2.7;
    b = 1.7;
    inp = a * a / (in + 2) * exp(-(b * in * in)) + log10(a + b * in);
    return inp;
}

float value_for_lb1_q2(float lim_value, std::string deskript) {
    std::cout << deskript;
    float value;
    std::cin >> value;
    while (value > lim_value) {
        std::cout << (Error().value);
        std::cout << (Error().try_again);
        std::cout << (deskript);
        std::cin >> value;
    }
    return value;
}

int print(std::string print__) {
    std::cout << print__;
    return 0;
}

void print_for_q7(float a, float x, float z) {
    cout << setw(4) << right << a
         << setw(5) << right << x
         << setw(8) << right << z
         << setw(2) << right << '\n';
}


void print_logo_for_q6_8_9() {
    cout << "__________________________________________\n"
         << setw(4) << left << "| I"
         << setw(6) << "|  X"
         << setw(16) << "|       F1"
         << setw(15) << "|       F2      |"
         << "\n";
}

void print_table_for_q6_8_9(int i, float x, float f1, float f2) {
    cout << setw(1) << left << '|'
         << setw(3) << right << fixed << setprecision(0) << i
         << setw(1) << left << '|'
         << setw(5) << right<<fixed << setprecision(1) << x
         << setw(1) << '|'
         << setw(15) << fixed << setprecision(3) << f1
         << setw(1) << '|'
         << setw(15) << fixed << setprecision(5) << f2
         << setw(1) << '|' << '\n';

}

