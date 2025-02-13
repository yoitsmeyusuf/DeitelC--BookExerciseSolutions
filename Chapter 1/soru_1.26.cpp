#include <iostream>

int main() {
    int sayi1, sayi2, sayi3;

    std::cout << "Üç farklı tam sayı girin: ";
    std::cin >> sayi1 >> sayi2 >> sayi3;

    int toplam = sayi1 + sayi2 + sayi3;
    double ortalama = toplam / 3.0;
    int carpim = sayi1 * sayi2 * sayi3;

    // En küçük sayıyı bulma
    int enKucuk = sayi1;
    if (sayi2 < enKucuk) {
        enKucuk = sayi2;
    }
    if (sayi3 < enKucuk) {
        enKucuk = sayi3;
    }

    // En büyük sayıyı bulma
    int enBuyuk = sayi1;
    if (sayi2 > enBuyuk) {
        enBuyuk = sayi2;
    }
    if (sayi3 > enBuyuk) {
        enBuyuk = sayi3;
    }

    std::cout << "Toplam: " << toplam << std::endl;
    std::cout << "Ortalama: " << ortalama << std::endl;
    std::cout << "Çarpım: " << carpim << std::endl;
    std::cout << "En küçük sayı: " << enKucuk << std::endl;
    std::cout << "En büyük sayı: " << enBuyuk << std::endl;

    return 0;
}
