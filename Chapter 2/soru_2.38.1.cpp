#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a nonnegative integer: ";
    cin >> n;

    // Hatalı giriş kontrolü yapabilirsiniz (negatif girilirse vb.),
    // burada basit tutuyoruz.

    long long factorial = 1;  // Sonuç büyük olabileceği için long long
    int i = 1;

    while (i <= n) {
        factorial *= i;  // factorial = factorial * i
        i++;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
