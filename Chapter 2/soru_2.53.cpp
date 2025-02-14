#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(10) << "Decimal" 
              << std::setw(10) << "Binary" 
              << std::setw(10) << "Octal" 
              << std::setw(10) << "Hex" << std::endl;

    for (int i = 1; i <= 256; ++i) {

        std::string binary;
        for (int j = 7; j >= 0; --j) {
            binary += ((i >> j) & 1) ? '1' : '0';
        }

        std::cout << std::setw(10) << i
                  << std::setw(10) << binary
                  << std::setw(10) << std::oct << i 
                  << std::setw(10) << std::hex << i << std::dec << std::endl;
    }
    // hocam valla kutuphane kullanmadan cok uzun surerdi

    return 0;
}