#include <iostream>
using namespace std;

template <typename T>
T myMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    int int1 = 5, int2 = 10;
    cout << "Smaller of " << int1 << " and " << int2 << " is: " << myMin(int1, int2) << endl;

    char char1 = 'z', char2 = 'a';
    cout << "Smaller of '" << char1 << "' and '" << char2 << "' is: '" << myMin(char1, char2) << "'" << endl;

    float float1 = 3.14f, float2 = 2.71f;
    cout << "Smaller of " << float1 << " and " << float2 << " is: " << myMin(float1, float2) << endl;

    return 0;
}
