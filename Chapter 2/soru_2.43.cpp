#include <iostream>
using namespace std;

int main() {
    int n, num, smallest;

    cout << "Enter the number of values: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of values must be greater than 0." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers: ";
    cin >> smallest; 

    for (int i = 1; i < n; ++i) {
        cin >> num;
        if (num < smallest) {
            smallest = num;
        }
    }

    cout << "The smallest number is: " << smallest << endl;

    return 0;
}