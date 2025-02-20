#include <iostream>

using namespace std;

int factorial(int n, int depth = 0);

int main() {
    int n;
    cout << "Enter n for factorial: ";
    cin >> n;

    cout << "Result: " << factorial(n) << endl;
    
    return 0;
}

int factorial(int n, int depth = 0) {
    for (int i = 0; i < depth; i++) cout << "  "; 

    cout << "factorial(" << n << ") called" << endl;

    if (n == 0) {
        for (int i = 0; i < depth; i++) cout << "  ";
        cout << "factorial(0) = 1 returned" << endl;
        return 1;
    }

    int result = n * factorial(n - 1, depth + 1);

    for (int i = 0; i < depth; i++) cout << "  ";
    cout << "factorial(" << n << ") = " << result << " returned" << endl;

    return result;
}