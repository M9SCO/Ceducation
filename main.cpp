// Main file
// copyandpast = evil
#include <string>

#include <cstdlib>
#include <iomanip>

#include "data/quests.cpp"


using namespace std;


int main() {
    bool its_time = false, valid_target_quest = false;
    cout
            << "~Practical tasks in informatics by Students Chernov Grigory from group PR-192~\n";

    while (not its_time) {

        int total_labs = 5, target_laboratory, target_quests = -1, lab_size = -1;
        cout << "\nEnter the lab number:\n"
                "0.Exit code\n"
                "1.Basic programming in C++.\n"
                "2.Programming of branched algorithms.\n"
                "3.Programming of cyclic algorithms with the specified number of repetitions.\n"
                "4.Programming cyclic algorithms with a precondition\n"
                "5.Programming of cyclic algorithms with postcondition\n";

        cout << ">:";
        cin >> target_laboratory;

        if (target_laboratory == 0) {
            cout << "Execute program...";
            its_time = true;
            continue;
        } else if (target_laboratory > total_labs || target_laboratory < 0) {
            cout << target_laboratory << " < " << total_labs << ". Enter valid target num\n";
            continue;
        }
        while (not valid_target_quest) {
            cout << "0.return back\n";
            if (target_laboratory == 1) {
                lab_size = 2;
                cout << "1.To calculate according to the formula\n"
                        "2.Calculation of the angle between 12 and position hour hand\n";
            } else if (target_laboratory == 2) {
                lab_size = 2;
                cout
                        << "1.Calculate the value of the function depending on the interval in which the argument entered from the keyboard falls.\n"
                           "2.To determine the Russian end of the age.\n";
            } else if (target_laboratory == 3) {
                lab_size = 2;
                cout << "1.For keyboard values of variables x calculate product in a row on all i from 2 to 10.\n"
                        "2.Calculate the values of two functions in n uniformly distributed in the range a≤x≤b points. The results are in the form of a table.\n";
            } else if (target_laboratory == 4) {
                lab_size = 2;
                cout
                        << "1.Draw a block diagram of the algorithm, write and debug a program to tab the following functions\n"
                           "2.Modify (change) the program 3_2 to calculate the functions F1(x) and F2(x) using instead of the counting cycle of the cycle operator with a precondition. Perform it and compare the results with those obtained in the previous work.\n";
            } else if (target_laboratory == 5) {
                lab_size = 3;
                cout
                        << "1.Modify the 3_2 program to compute functions F1(x) and F2 (x) using a loop operator with a postcondition. Perform it and compare the results with those obtained earlier.\n"
                           "2.Draw a block diagram of the algorithm, write and debug a program for one of the following tasks.\n"
                           "3.Modify the program 4_1 using the loop operator with the postcondition do ... while and compare with the results obtained in work 4.\n";
            }

            cout << ">:";
            cin >> target_quests;
            if (target_quests == 0) {
                break;
            } else if (target_quests > lab_size || target_quests < 0) {
                cout << "Enter valid quest num. repeat\n\n";
            } else {
                valid_target_quest = true;
            }
        }
        if (target_quests == 1) {
            if (target_laboratory == 1) { quest1(); }
            else if (target_laboratory == 2) { quest3(); }
            else if (target_laboratory == 3) { quest5(); }
            else if (target_laboratory == 4) { quest7(); }
            else if (target_laboratory == 5) { quest9(); }
        } else if (target_quests == 2) {
            if (target_laboratory == 1) { quest2(); }
            else if (target_laboratory == 2) { quest4(); }
            else if (target_laboratory == 3) { quest6(); }
            else if (target_laboratory == 4) { quest8(); }
            else if (target_laboratory == 5) { quest10(); }
        } else if (target_quests == 3) {
            if (target_laboratory == 5) { quest11(); }
        }

        //geth()
        cout << "\n\n~~~~~~~~~~\n";
        valid_target_quest = false;

    }
    return 0;
}


