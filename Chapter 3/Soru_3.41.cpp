#include <iostream>
#include <limits>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

double fibonacci_double(int n) {
    if (n <= 1) {
        return n;
    }
    double a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Fibonacci: " << fibonacci(n) << std::endl;

    int maxIntFib = 0;
    int i = 0;
    while (true) {
        int fib = fibonacci(i);
        if (fib < 0) { 
            break;
        }
        maxIntFib = fib;
        ++i;
    }
    std::cout << "Max int Fibonacci: " << maxIntFib << std::endl;

    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Fibonacci: " << fibonacci_double(n) << std::endl;

    double maxDoubleFib = 0;
    i = 0;
    while (true) {
        double fib = fibonacci_double(i);
        if (fib == std::numeric_limits<double>::infinity()) {
            break;
        }
        maxDoubleFib = fib;
        ++i;
    }
    std::cout << "Max double Fibonacci: " << maxDoubleFib << std::endl;

    return 0;
}
