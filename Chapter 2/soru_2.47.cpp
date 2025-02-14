#include <iostream>
using namespace std;

int main() {
    // Pattern A
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Pattern B
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Pattern C
    for (int i = 10; i >= 1; --i) {
        for (int j = 10; j > i; --j) {
            cout << ' ';
        }
        for (int k = 1; k <= i; ++k) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    // Pattern D
    for (int i = 1; i <= 10; ++i) {
        for (int j = 10; j > i; --j) {
            cout << ' ';
        }
        for (int k = 1; k <= i; ++k) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}