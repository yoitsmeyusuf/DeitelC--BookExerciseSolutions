#include <iostream>

int main() {
    int sayi;
    std::cout << "Bir tam sayi girin: ";
    std::cin >> sayi;

    if (sayi % 2 == 0)
        std::cout << "Sayi cifttir." << std::endl;
    else
        std::cout << "Sayi tektir." << std::endl;

    return 0;
}
