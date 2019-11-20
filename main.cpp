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
                                "Programming cyclic algorithms with a precondition",
                                "Programming of cyclic algorithms with postcondition"};
        vector<vector<string>> listquestions = {{"Return back", "To calculate according to the formula",
                                                 "Calculation of the angle between 12 and position hour hand"},
                                                {"Return back", "Calculate the value of the function depending on the interval in which the argument entered from the keyboard falls.",
                                                 "To determine the Russian end of the age."},
                                                {"Return back", "For keyboard values of variables x calculate product in a row on all i from 2 to 10.",
                                                 "Calculate the values of two functions in n uniformly distributed in the range a≤x≤b points. The results are in the form of a table."},
                                                {"Return back", "Draw a block diagram of the algorithm, write and debug a program to tab the following functions", "Modify (change) the program 3_2 to calculate the functions F1(x) and F2(x) using instead of the counting cycle of the cycle operator with a precondition. Perform it and compare the results with those obtained in the previous work."},
                                                {"Return back", "Modify the 3_2 program to compute functions F1(x) and F2 (x) using a loop operator with a postcondition. Perform it and compare the results with those obtained earlier.",
                                                 "Draw a block diagram of the algorithm, write and debug a program for one of the following tasks."}
                                               };
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
            while(not valid_target_quest) {
                cout << ">:";
                cin >> target_quest;
                if (target_quest == 0) { cout << ""; valid_target_quest= true;}
                else if (_quests == 1 && target_quest == 1) { quest1(); valid_target_quest= true;}
                else if (_quests == 1 && target_quest == 2) { quest2(); valid_target_quest= true;}

                else if (_quests == 2 && target_quest == 1) { quest3(); valid_target_quest= true;}
                else if (_quests == 2 && target_quest == 2) { quest4(); valid_target_quest= true;}

                else if (_quests == 3 && target_quest == 1) { quest5(); valid_target_quest= true;}
                else if (_quests == 3 && target_quest == 2) { quest6(); valid_target_quest= true;}

                else if (_quests == 4 && target_quest == 1) { quest7(); valid_target_quest= true;}
                else if (_quests == 4 && target_quest == 2) { quest8(); valid_target_quest= true;}

                else if (_quests == 5 && target_quest == 1) { quest9(); valid_target_quest= true;}
                else if (_quests == 5 && target_quest == 2) { quest10(); valid_target_quest= true;}
                if (not valid_target_quest){
                    cout << "not found this quest\n\nTry again.";
                }
            }
        }
        //geth()
        cout << "\n\n~~~~~~~~~~\n";
        valid_target_quest = false;
    }
    return 0;
}


