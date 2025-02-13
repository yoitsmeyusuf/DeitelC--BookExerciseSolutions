#include <iostream>

int main() {
    int sayi1, sayi2;
    std::cout << "Iki tam sayi girin: ";
    std::cin >> sayi1 >> sayi2;

    if (sayi2 != 0 && sayi1 % sayi2 == 0)
        std::cout << sayi1 << " sayisi " << sayi2 << "'nin katidir." << std::endl;
    else
        std::cout << sayi1 << " sayisi " << sayi2 << "'nin kati degildir." << std::endl;

    return 0;
}
