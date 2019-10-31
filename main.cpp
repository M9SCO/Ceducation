// Main file
// copyandpast = evil
#include <stdio.h>
#include <vector>
#include <iomanip>
#include <string>

#include "data/quests.cpp"

using namespace std;


int main() {
    bool its_time = false, valid_target_quest = false;
    cout
            << "~Practical tasks in informatics by Students Chernov Grigory from group PR-192~\n";

    while (not its_time) {
        int i, z, _quests, lab_size, work_size;
        int target_quest;
        cout << "\nEnter the lab number:\n";
        vector<string> works = {"Exit code", "Basic programming in C++.", "Programming of branched algorithms.",
                                "Programming of cyclic algorithms with the specified number of repetitions.",
                                "Programming cyclic algorithms with a precondition"};
        vector<vector<string>> listquestions = {{"Return back", "To calculate according to the formula",
                                                        "Calculation of the angle between 12 and position hour hand"},
                                                {"Return back", "Calculate the value of the function depending on the interval in which the argument entered from the keyboard falls.",
                                                        "To determine the Russian end of the age."},
                                                {"Return back", "For keyboard values of variables x calculate product in a row on all i from 2 to 10.",
                                                        "Calculate the values of two functions in n uniformly distributed in the range a≤x≤b points. The results are in the form of a table.",
                                                {"Return back", "Draw a block diagram of the algorithm, write and debug a program to tab the following functions"}}};
        work_size = works.size();
        for (i = 0; i < work_size; i++) {
            cout << i << ". " << works.at(i) << "\n";
        }

        cout << ">:";
        cin >> _quests;
        if (_quests == 0) { its_time = true; }
        else if (_quests > work_size || _quests < 0) { cout << "\n\n•Not valid lab num. Enter again... \n"; }
        else {
            lab_size = listquestions.at(_quests - 1).size();

            cout
                    << "\n~~~~~~~~~~\n\n~Inside lab_" << _quests << " have " << lab_size - 1 << " tasks~\n";
            for (z = 0; z < lab_size; z++) {
                cout << z << ". " << listquestions.at(_quests - 1).at(z) << "\n";
            }
            cout << ">:";
            cin >> target_quest;

            if (target_quest == 0) { cout << " "; }
            else if (_quests == 1 && target_quest == 1) { quest1(); }
            else if (_quests == 1 && target_quest == 2) { quest2(); }

            else if (_quests == 2 && target_quest == 1) { quest3(); }
            else if (_quests == 2 && target_quest == 2) { quest4(); }

            else if (_quests == 3 && target_quest == 1) { quest5(); }
            else if (_quests == 3 && target_quest == 2) { quest6(); }
            else if (_quests == 4 && target_quest == 1) { quest7(); }
        }
        //geth()
        cout << "\n\n~~~~~~~~~~\n";
        valid_target_quest = false;
    }
    return 0;

}


