//
// Created by m9sco on 29.10.19.
//
#include <math.h>
#include <stdio.h>
#include <string>
#include "list"
#include "iostream"
#include "error.cpp"
#include "laborer.cpp"

using namespace std;




void quest1() {
    std::cout << "Formula: a^2/(x+2)*e^-(bx^2)+ln(a+bx)\n";
    int x1, x2;
    float y, z;
    print("X(1) = ");
    std::cin >> x1;
    print("X(2) = ");
    std::cin >> x2;
    y = calculate_lab1(x1);
    z = calculate_lab1(x2);
//  Копипаст-зло
    std::cout << "function for x(1) = " << y << " and for x(2) = " << z;
}

void quest2() {

    print("Send digital time\n");

    float h, m, s;
    h = value_for_lb1_q2(23, "hours: ");
    m = value_for_lb1_q2(59, "mins: ");
    s = value_for_lb1_q2(59, "sec: ");
    if (h >= 12) {
        h -= 12;
    }

    float cours_h;
    print("angle between 12 and hour hand: ");
    cours_h = (h * 30 + m / 6 + s / 360);
    std::cout << cours_h;
}

void quest3() {
    float a = 1.8, b = -0.5, c = 3.5, x, y;
    std::cout << "value:";
    std::cin >> x;
    if (x >= 1.2) {
        y = a / x + b * x * x - c;
    } else {
        y = (a + b * x) / sqrt(x + 1);
    }
    std::cout << "y = " << y;
}

void quest4() {
    std::string end, k, z;
    std::cout << "Tvoi vozrast:";
    std::cin >> z;
    k = z.back();
    if (k == "0" || k == "5" || k == "6" || k == "7" || k == "8" || k == "9") { end = "let"; }
    else if (k == "1") { end = "god"; }
    else { end = "goda"; }
    std::cout << "Tebe " << z << " " << end;
}

void quest5() {

    float x, z = 1;
    int i;
    std::cout << "Send x: ";
    std::cin >> x;
    for (i = 2; i <= 10; i++) {
        z *= (x + i) / i;
    }
    std::cout << "Result: " << z;
}

void quest6() {
    float f1, f2, step, a = -4, b = 4, n = 20, i, x, L;
    step = (a - b) / n;
    cout << "_______________________\n"
         << setw(3) << left << "| I"
         << setw(5) << "|  X"
         << setw(6) << "|  F1"
         << setw(10) << "|   F2   |"
         << "\n_______________________\n";


    for (i = 1; i < n + 1; i++) {
        x = i * step;
        f1 = sqrt(exp(x) - L);
        f2 = exp(x) * sin(x);
        cout << setw(1)<< left << '|'
             << setw(2) << right << fixed << setprecision(0) << i
             << setw(1) << left <<  '|'
             << setw(4) << fixed << setprecision(1) << x
             << setw(1) << '|'
             << setw(5) << fixed << setprecision(3) << f1
             << setw(1) << '|'
             << setw(8) << fixed << setprecision(5) << f2
             << setw(1) << '|'
             << "\n_______________________\n";

    }
}
void quest7() {
    float a1= 2, a2=2.1, dx1, dx2, x, z1, z2;
    dx1 = a1/10;
    dx2 = a2/10;
    x = dx1;
    cout << "_______________________\n"
         << setw(3) << left << "| A"
         << setw(5) << "|  X"
         << setw(6) << "|  Z"
         << setw(10) << "|   Z2   |"
         << "\n_______________________\n";
    while (0.1 <= x < 0.5){
        x+=dx1;
        z1 = a1*(exp(x+2*a1)*exp(-(x-3*a1)));
        z2 = a2*(exp(x+2*a2)*exp(-(x-3*a2)));
    }
    while (){}
    while (){}



}