#include <iostream>

int main() {
    int N = 1;

    std::cout << "N\t10*N\t100*N\t1000*N\n";

    while (N <= 5) {
        std::cout << N << '\t' << 10 * N << '\t' << 100 * N << '\t' << 1000 * N << '\n';
        N++;
    }

    return 0;
}