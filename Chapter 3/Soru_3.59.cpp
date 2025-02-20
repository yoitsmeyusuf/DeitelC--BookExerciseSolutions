#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b, T c) {
    T largest = a;  

    if (b > largest) {
        largest = b;  
    }
    if (c > largest) {
        largest = c; 
    }

    return largest;  
}

int main() {
    int int1 = 5, int2 = 10, int3 = 8;
    cout << "Largest of " << int1 << ", " << int2 << ", and " << int3 << " is: " << max(int1, int2, int3) << endl;

    char char1 = 'x', char2 = 'a', char3 = 'z';
    cout << "Largest of '" << char1 << "', '" << char2 << "', and '" << char3 << "' is: '" << max(char1, char2, char3) << "'" << endl;

    float float1 = 3.14f, float2 = 2.71f, float3 = 2.99f;
    cout << "Largest of " << float1 << ", " << float2 << ", and " << float3 << " is: " << max(float1, float2, float3) << endl;

    return 0;
}
