#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int worker_type, choice;
    float base_salary, worked_hours, bonus_rate;
    float hourly_rate, bonus_payment = 0;
    float penalty = 0, gross_salary;
    float tax = 0, pension = 0, net_salary;
    char has_bonus, damaged;
       // Select worker type
    cout << "----- SALARY CALCULATOR -----" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Choose worker type: ";
    cin >> worker_type;

    switch (worker_type) {
         // EMPLOYEE CALCULATION
        case 1:
             cout << "\nEnter base salary: ";
             cin >> base_salary;
               cout << "Enter hours worked: ";
            cin >> worked_hours;
             cout << "Enter bonus rate: ";
            cin >> bonus_rate;
             // Calculate bonus or penalty
            if (worked_hours > 40) {
                bonus_payment = (worked_hours - 40) * bonus_rate;
            }
            else if (worked_hours < 40) {
                penalty = (40 - worked_hours) * base_salary / 40;
            }
            else {
                bonus_payment = 0;
                penalty = 0;
            }
               // Calculate gross salary
            gross_salary = base_salary + bonus_payment;
                // Calculate tax
            if (gross_salary > 0 && gross_salary <= 3500) {
                tax = 0;
            }
            else if (gross_salary > 3500 && gross_salary <= 10000) {
                tax = gross_salary * 0.10;
            }
            else if (gross_salary > 10000 && gross_salary <= 20000) {
                tax = gross_salary * 0.15;
            }
            else if (gross_salary > 20000 && gross_salary <= 50000) {
                tax = gross_salary * 0.20;
            }
            else if (gross_salary > 50000 && gross_salary <= 100000) {
                tax = gross_salary * 0.25;
            }
            else if (gross_salary > 100000) {
                tax = gross_salary * 0.30;
            }
            else {
                tax = 0;
            }
                 // Calculate pension
            pension = gross_salary * 0.07;
                 // Calculate net salary
            net_salary = gross_salary - tax - pension - penalty;
            break;
                // LABORER CALCULATION
        case 2:
             cout << "\nEnter hours worked: ";
            cin >> worked_hours;
            cout << "Enter hourly rate: ";
            cin >> hourly_rate;
                // Check whether laborer has a bonus
            cout << "Does the laborer have a bonus? (y/n): ";
            cin >> has_bonus;
              if (has_bonus == 'y' || has_bonus == 'Y') {
                cout << "Enter bonus amount: ";
                cin >> bonus_payment;
            }
                // Calculate gross salary
            gross_salary = (worked_hours * hourly_rate)
                           + bonus_payment;
                              // Check machinery damage
            cout << "Did the laborer damage any machinery? (y/n): ";
            cin >> damaged;
            if (damaged == 'y' || damaged == 'Y') {
                cout << "Enter salary penalty: ";
                cin >> penalty;
            }
                // No tax or pension for laborers
            tax = 0;
            pension = 0;
             // Calculate net salary
            net_salary = gross_salary - penalty;
                   break;
             default:
            cout << "Invalid worker type!" << endl;
            return 0;
    }
       // Display salary menu
    cout << "\n----- SALARY MENU -----" << endl;
    cout << "1. Gross Salary" << endl;
    cout << "2. Tax Deduction" << endl;
    cout << "3. Pension Deduction" << endl;
    cout << "4. Salary Penalty" << endl;
    cout << "5. Net Salary" << endl;
    cout << "6. Display All Details" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;
      cout << fixed << setprecision(2);
      // Display selected result
    switch (choice) {
               case 1:
            cout << "Gross Salary: " << gross_salary << endl;
            break;
               case 2:
            if (worker_type == 1)
                cout << "Tax Deduction: " << tax << endl;
            else
                cout << "Tax is not applicable to laborers." << endl;
            break;
             case 3:
            if (worker_type == 1)
                cout << "Pension Deduction: " << pension << endl;
            else
                cout << "Pension is not applicable to laborers." << endl;
            break;
                 case 4:
            cout << "Salary Penalty: " << penalty << endl;
            break;
        case 5:
            cout << "Net Salary: " << net_salary << endl;
            break;
        case 6:
            cout << "\n----- SALARY DETAILS -----" << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Bonus Payment: " << bonus_payment << endl;
            cout << "Salary Penalty: " << penalty << endl;
    if (worker_type == 1) {
                cout << "Tax Deduction: " << tax << endl;
                cout << "Pension Deduction: " << pension << endl;
            }
            else {
                cout << "Tax Deduction: Not applicable" << endl;
                cout << "Pension Deduction: Not applicable" << endl;
            }
              cout << "Net Salary: " << net_salary << endl;
            break;
        default:
            cout << "Invalid menu choice!" << endl;
    }
     return 0;
}
