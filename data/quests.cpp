//
// Created by m9sco on 29.10.19.
//
#include <math.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include "list"
#include "iostream"
#include "error.cpp"
#include "laborer.cpp"

using namespace std;

// lab_1
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

// lab_2
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

// lab_3
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
    float f1, f2, step, a = -4, b = 4, n = 20, x;
    int i;
    step = abs(a - b) / (n - 1);
    print_logo_for_q6_8_9();
    x = a;
    for (i = 0; i < n; i++) {
        f1 = x * x * x * exp(2 * x);
        f2 = exp(x) * sin(x);
        print_table_for_q6_8_9(i, x, f1, f2);
        x += step;

    }
}

// lab_4
void quest7(float a = 2) {
    float dx, x, z;
    dx = a / 10;
    x = dx;
    cout << "__________________\n"
         << setw(4) << left << "| A"
         << setw(5) << "|  X"
         << setw(10) << "|   Z   |\n";
    while (0.1 <= x && x < 0.5) {

        z = a * (exp(x + 2 * a) + exp((x - 3 * a) * -1));
        print_for_q7(a, x, z);
        x = x + dx;
    }
    while (x == 0.5) {
        z = sin(x);
        print_for_q7(a, x, z);
        x = x + dx;
    }
    while (0.5 < x && x < 1.5) {
        z = a + a * cos(x + 3 * a);
        print_for_q7(a, x, z);
        x = x + dx;
    }
    if (a == 2) {
        quest7(2.1);
    }

}

void quest8() {
    float f1, f2, step, a = -4, b = 4, x;
    int i = 1, n = 20;
    step = abs(a - b) / (n - 1);
    print_logo_for_q6_8_9();
    x = a;
    while (i <= n) {
        f1 = x * x * x * exp(2 * x);
        f2 = exp(x) * sin(x);
        print_table_for_q6_8_9(i, x, f1, f2);
        x += step;
        i += 1;

    }
}

// lab_5
void quest9() {
    float f1, f2, step, a = -4, b = 4, x;
    int i = 1, n = 20;
    step = abs(a - b) / (n - 1);
    print_logo_for_q6_8_9();
    x = a;
    do {
        f1 = x * x * x * exp(2 * x);
        f2 = exp(x) * sin(x);
        print_table_for_q6_8_9(i, x, f1, f2);
        x += step;
        i += 1;
    } while (i < n || i == n);
}

void quest10() {
    int i = 0;
    float x, max_min = pow(10, -3), X;
    cout << "send x: ";
    cin >> X;
    x = X;
    do {
        x = sin(x);
        i += 1;
    } while (abs(x) > max_min || abs(x) == max_min);
    cout << "position while abs(" << X << ")<" << max_min << ": " << i;
}

void quest11() {
    float f1, f2, step, a = -4, b = 4, x;
    int i = 1, n = 20;
    step = abs(a - b) / (n - 1);
    print_logo_for_q6_8_9();
    x = a;
    do {
        f1 = x * x * x * exp(2 * x);
        f2 = exp(x) * sin(x);
        print_table_for_q6_8_9(i, x, f1, f2);
        x += step;
        i += 1;
    } while (i <= n);
}

// lab_6
void quest12() {

    int a[10] = {3352, 3278, 4342, 2320, 381, 1964, 4981, 2849, 1581, 775};
    int i;
    float average, n = 0, sum = 0;

    for (i = 0; i < 10; i++) {
        if (a[i] % 2 == 1) {
            sum += a[i];
            n += 1;
        }
    }
    average = sum / n;
    cout << "Average sum between odd num in array = " << average << " and all sum =" << sum << "\n";
}

void quest13() {
    int a[11], i;
    float average, n = 0, sum = 0;
    cout << "Send 11 elemets into array\n";
    for (i = 0; i < 11; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) {
            sum += a[i];
            n += 1;
        }
    }
    average = sum / n;
    cout << "\n\nAverage sum between odd num in array = " << average << " and all sum =" << sum << "\n";

}

void quest14() {
    int i, total_steps = 20;
    float array1_[total_steps], array2_[total_steps], step, a = -4, b = 4, x;

    step = abs(a - b) / (total_steps - 1);
    print_logo_for_q6_8_9();
    x = a;
    for (i = 0; i < total_steps; i++) {
        array1_[i] = x * x * x * exp(2 * x);
        array2_[i] = exp(x) * sin(x);
        print_table_for_q6_8_9(i, x, array1_[i], array2_[i]);
        x += step;

    }
}

//lab 7

void quest15() {
    int i, n, a[5][5], dump = 1;

    for (i = 0; i < 5; i++) {
        cout << "| ";
        for (n = 0; n < 5; n++) {
            if (dump == 6) {
                dump = 1;
            }
            a[i][n] = dump;
            dump += 1;
            cout << a[i][n] << " ";

        }
        cout << "|\n";
        dump -= 1;


    }
}

void quest16() {
    int i, n;

    for (i = 1; i < 10; i++) {
        cout << "|";
        for (n = 1; n < 10; n++) {
            cout << setw(2) << i * n << setw(1) << "|";
        }
        cout << "\n";


    }
}

void quest17() {

    int i, total_steps = 20;
    float common_array[total_steps][3], step, a = -4, b = 4, x;

    step = abs(a - b) / (total_steps - 1);
    print_logo_for_q6_8_9();
    common_array[0][0] = a;
    for (i = 0; i < total_steps; i++) {
        common_array[i][1] = pow(common_array[0][0], 3) * exp(2 * common_array[0][0]);
        common_array[i][2] = exp(common_array[0][0]) * sin(common_array[0][0]);
        print_table_for_q6_8_9(i, common_array[0][0], common_array[i][1], common_array[i][2]);
        common_array[0][0] += step;

    }

}

