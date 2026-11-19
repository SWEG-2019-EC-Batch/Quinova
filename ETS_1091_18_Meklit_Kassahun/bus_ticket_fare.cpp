
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int seat_left, destination, age;
    char student;
    float trip_fare, baggage_weight;
    float discount = 0, baggage_fare, total_fare;

    // Check seat availability
    cout << "Enter available seats: ";
    cin >> seat_left;

    if (seat_left <= 0) {
        cout << "Sorry, the bus is sold out!" << endl;
        return 0;
    }

    // Display available routes
    cout << "\nAvailable Destinations:\n";
    cout << "1. Addis Ababa to Bahirdar - 350 Birr\n";
    cout << "2. Addis Ababa to Hawassa - 500 Birr\n";
    cout << "3. Addis Ababa to Lalibela - 950 Birr\n";
    cout << "4. Addis Ababa to Diredwa - 850 Birr\n";
    cout << "5. Addis Ababa to Gondar - 700 Birr\n";

    cout << "Choose destination (1-5): ";
    cin >> destination;

    // Select fare using switch
    switch (destination) {
        case 1:
            trip_fare = 350;
            break;

        case 2:
            trip_fare = 500;
            break;

        case 3:
            trip_fare = 950;
            break;

        case 4:
            trip_fare = 850;
            break;

        case 5:
            trip_fare = 700;
            break;

        default:
            cout << "Invalid destination!" << endl;
            return 0;
    }

    // Get passenger information
    cout << "Enter passenger age: ";
    cin >> age;

    cout << "Are you a student? (y/n): ";
    cin >> student;

    // Apply the first matching discount
    if (age < 12) {
        discount = 0.50;
    }
    else if (student == 'y' || student == 'Y') {
        discount = 0.30;
    }
    else if (age > 60) {
        discount = 0.25;
    }
    else {
        discount = 0;
    }

    // Calculate discounted trip fare
    trip_fare = trip_fare - (trip_fare * discount);

    // Get baggage weight
    cout << "Enter baggage weight (kg): ";
    cin >> baggage_weight;

    // Calculate baggage fare
    if (baggage_weight > 20) {
        baggage_fare = (baggage_weight - 20) * 10;
    }
    else {
        baggage_fare = 0;
    }

    // Calculate total fare
    total_fare = trip_fare + baggage_fare;

    // Display final results
    cout << fixed << setprecision(2);

    cout << "\nBaggage Fare: " << baggage_fare << " Birr" << endl;
    cout << "Trip Fare: " << trip_fare << " Birr" << endl;
    cout << "Total Fare: " << total_fare << " Birr" << endl;

    return 0;
}
