#include <iostream>
using std::cout;
using std::endl;

int main() {
    for (int i = 0; i < 8; ++i) { // 8 satır
        for (int j = 0; j < 8; ++j) { // Her satırda 8 sütun
            cout << "* ";
        }
        if (i % 2 == 0) {
            cout << endl;
            cout << ' '; // Tek olan satırlarda başa boşluk koy
        }
        cout << endl;
    }
    return 0;
}



