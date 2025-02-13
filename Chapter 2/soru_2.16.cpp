#include <iostream>
using namespace std;

int main() {
    double miles, gallons, totalMiles = 0, totalGallons = 0;

    while (true) {
        cout << "Enter miles driven (-1 to end): ";
        cin >> miles;
        if (miles == -1) break;

        cout << "Enter gallons used: ";
        cin >> gallons;

        double mpg = miles / gallons;
        cout << "Miles per gallon for this tankful: " << mpg << endl;

        totalMiles += miles;
        totalGallons += gallons;
    }

    if (totalGallons != 0) {
        double totalMpg = totalMiles / totalGallons;
        cout << "Combined miles per gallon for all tankfuls: " << totalMpg << endl;
    } else {
        cout << "No data to calculate combined miles per gallon." << endl;
    }

    return 0;
}