#include <iostream>

using namespace std;

// Recursive function to solve Towers of Hanoi
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    // Move n-1 disks from 'from' to 'aux' using 'to' as an auxiliary
    hanoi(n - 1, from, aux, to);

    // Move the nth disk from 'from' to 'to'
    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    // Move n-1 disks from 'aux' to 'to' using 'from' as an auxiliary
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the function with pegs A, B, and C
    hanoi(n, 'A', 'C', 'B');

    return 0;
}
