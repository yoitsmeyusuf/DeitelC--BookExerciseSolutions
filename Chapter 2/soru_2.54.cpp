#include <iostream>

int main() {
    double pi = 0.0;
    int sign = 1;
    int terms = 0;

    std::cout << "Terms\tApproximation\n";

    for (int i = 0; ; ++i) {
        pi += sign * 4.0 / (2 * i + 1);
        sign = -sign;
        terms++;

        std::cout << terms << "\t" << pi << "\n";

        if (pi >= 3.14159) {
            break;
        }
    }
// Olmuyor anlamadıgım bir sekilde
    return 0;
}
