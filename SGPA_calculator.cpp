#include <iostream>
#include <unordered_map>
using namespace std;

float gradeToPoint(char grade) {//this function will make grade from alphabet to numerical
    unordered_map<char, float> gradeMap = {
        {'O', 10.0},
        {'A', 9.0},
        {'B', 8.0},
        {'C', 7.0},
        {'D', 6.0},
        {'E', 5.0},
        {'F', 0.0},
        {'I', -1.0}
    };

    if (gradeMap.find(grade) != gradeMap.end()) {//this fill find if the grade given is in the map
        return gradeMap[grade];//if the given grade is there than will return the numerics of that grade
    }
    return -2.0; // Invalid grade as -1 is for I grade
}

int main() {
    int subjects;
    float totalCredits = 0.0, totalWeightedPoints = 0.0;
    char inputType;

    cout << "Enter the number of subjects in your semester: ";
    cin >> subjects;

    if (subjects <= 0) {
        cout << "Invalid number of subjects.\n";
        return 0;
    }

    cout << "Do you want to enter grades as numbers or characters? (Enter 'n' for numbers or 'c' for characters): ";
    cin >> inputType;

    for (int i = 1; i <= subjects; ++i) {
        float credit;
        cout << "\n--- Subject " << i << " ---\n";

        if (inputType == 'n') {
            float grade;
            cout << "Enter numeric grade point (0-10): ";
            cin >> grade;

            if (grade < 0 || grade > 10) {
                cout << "Invalid numeric grade point. Please restart the program.\n";
                return 1;
            }

            cout << "Enter credit for the subject: ";
            cin >> credit;

            totalCredits += credit;
            totalWeightedPoints += grade * credit;

        } else if (inputType == 'c') {
            char gradeChar;
            cout << "Enter grade (O, A, B, C, D, E, F, I): ";
            cin >> gradeChar;

            float gradePoint = gradeToPoint(gradeChar);

            if (gradePoint == -2.0) {
                cout << "Invalid grade entered. Please restart the program.\n";
                return 1;
            } else if (gradePoint == -1.0) {
                cout << "Grade is 'Incomplete'. This subject will not be counted.\n";
                continue;
            }

            cout << "Enter credit for the subject: ";
            cin >> credit;

            totalCredits += credit;
            totalWeightedPoints += gradePoint * credit;

        } else {
            cout << "Invalid input type. Please enter 'n' or 'c'.\n";
            return 1;
        }
    }

    if (totalCredits == 0) {
        cout << "\nTotal credits is zero. Cannot calculate SGPA.\n";
    } else {
        float sgpa = totalWeightedPoints / totalCredits;
        cout << "\nYour SGPA is: " << sgpa << endl;
    }

    return 0;
}
