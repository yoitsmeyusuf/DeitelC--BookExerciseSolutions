#include <iostream>

int main() {
    int sayi;
    std::cout << "Bes basamakli bir sayi girin: ";
    std::cin >> sayi;

    int birler = sayi % 10;
    int onlar = (sayi / 10) % 10;
    int yuzler = (sayi / 100) % 10;
    int binler = (sayi / 1000) % 10;
    int onBinler = sayi / 10000;

    std::cout << onBinler << "   " << binler << "   " << yuzler << "   " << onlar << "   " << birler << std::endl;

    return 0;
}
