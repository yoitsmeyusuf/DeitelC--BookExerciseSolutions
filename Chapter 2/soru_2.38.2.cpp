#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (n) to approximate e: ";
    cin >> n;

    double e = 0.0;
    double factorial = 1.0;
    int i = 0;  // 0'dan başlayarak n'e kadar gideceğiz.

    while (i <= n) {
        // i = 0 iken 1/0! = 1/1 = 1
        e += 1.0 / factorial; 
        i++;
        factorial *= i;  // Bir sonraki faktöriyel değeri
        // (i, n'den büyük olunca çarpma yine devam eder, 
        // ama döngü sonlanırsa problem yok)
    }

    cout << "Approximation of e using " << n + 1 << " terms: " << e << endl;

    return 0;
}
