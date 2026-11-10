#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    int units;
    double energyCharge, totalBill;

    // Declare constants
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    // Input
    cout << "Enter electricity units: ";
    cin >> units;

    // Calculate energy charge
    energyCharge = (units <= 50) ?
                   (units * FIRST_RATE) :
                   (50 * FIRST_RATE) +
                   ((units - 50) * EXTRA_RATE);

    // Calculate total bill
    totalBill = energyCharge + SERVICE_CHARGE;

    // Display output
    cout << fixed << setprecision(2);

    cout << "\nEnergy Charge: " << energyCharge << " Birr" << endl;

    cout << "Service Charge: " << SERVICE_CHARGE << " Birr" << endl;

    cout << "Total Bill: " << totalBill << " Birr" << endl;

    return 0;
}
