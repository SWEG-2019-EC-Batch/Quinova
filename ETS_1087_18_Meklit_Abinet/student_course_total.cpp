
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double assignment, midterm, finalExam, total;

    // Declare constants
    const double ASSIGN_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // Input marks
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    // Validate the marks
    bool valid = (assignment >= 0 && assignment <= 100) &&
                 (midterm >= 0 && midterm <= 100) &&
                 (finalExam >= 0 && finalExam <= 100);

    // Calculate course total
    total = (assignment * ASSIGN_WEIGHT) +
            (midterm * MIDTERM_WEIGHT) +
            (finalExam * FINAL_WEIGHT);

    // Display result using conditional operators
valid ? cout << "Course Total: " << fixed << setprecision(1) << total << endl
      : cout << "Invalid marks! Enter marks between 0 and 100." << endl;

valid ? cout << (total >= PASS_MARK ? "Pass" : "Fail") << endl
      : cout << "Cannot calculate result." << endl;

    return 0;
}
