#include <iostream>

int main() {
    int a, b, c, d, e;
    std::cout << "Bes tane tam sayi girin: ";
    std::cin >> a >> b >> c >> d >> e;

    int enBuyuk = a, enKucuk = a;

    if (b > enBuyuk) enBuyuk = b;
    if (c > enBuyuk) enBuyuk = c;
    if (d > enBuyuk) enBuyuk = d;
    if (e > enBuyuk) enBuyuk = e;

    if (b < enKucuk) enKucuk = b;
    if (c < enKucuk) enKucuk = c;
    if (d < enKucuk) enKucuk = d;
    if (e < enKucuk) enKucuk = e;

    std::cout << "En buyuk sayi: " << enBuyuk << std::endl;
    std::cout << "En kucuk sayi: " << enKucuk << std::endl;

    return 0;
}
