#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double distance, fuelConsumption, fuelPrice;
    double time, speed, fuelUsed, fuelCost;
    int hours, minutes;

    // Input
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel hours: ";
    cin >> hours;

    cout << "Enter travel minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100 km): ";
    cin >> fuelConsumption;

    cout << "Enter price per liter: ";
    cin >> fuelPrice;

    // Convert travel time into hours
    time = hours + (minutes / 60.0);

    // Calculate average speed
    speed = distance / time;

    // Calculate fuel used
    fuelUsed = (distance * fuelConsumption) / 100;

    // Calculate fuel cost
    fuelCost = fuelUsed * fuelPrice;

    // Display output
    cout << fixed << setprecision(2);

    cout << "\nAverage Speed: " << speed << " km/h" << endl;

    cout << "Fuel Used: " << fuelUsed << " liters" << endl;

    cout << "Fuel Cost: " << fuelCost << " Birr" << endl;

    return 0;
}
