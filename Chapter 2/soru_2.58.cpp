#include <iostream>
using namespace std;

int main() {
    // Elmasın üst yarısı (1'den 5'e kadar satırlar)
    for (int i = 1; i <= 5; i++) {
        // i. satırda yazılacak boşluk sayısı: (5 - i)
        for (int j = 1; j <= 5 - i; j++) {
            cout << ' ';  // Tek boşluk
        }
        // i. satırda yazılacak yıldız sayısı: (2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << '*';  // Tek yıldız
        }
        cout << '\n';     // Satır sonu
    }

    // Elmasın alt yarısı (4'ten 1'e kadar satırlar)
    for (int i = 4; i >= 1; i--) {
        // i. satırda yazılacak boşluk sayısı: (5 - i)
        for (int j = 1; j <= 5 - i; j++) {
            cout << ' ';
        }
        // i. satırda yazılacak yıldız sayısı: (2*i - 1)
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
