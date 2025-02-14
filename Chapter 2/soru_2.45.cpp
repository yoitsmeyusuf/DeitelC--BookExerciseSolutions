#include <iostream>
using namespace std;

int main() {
    cout << "Number\tFactorial" << endl;
    for (int i = 1; i <= 5; ++i) {
        int factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        cout << i << "\t" << factorial << endl;
    }


    // 20 faktoriyel int sınırlarını aşıyor
 // 20! = 2432902008176640000 bundan dolayı int bu degeri tutatarak yanlış sonuç verir
    
    return 0;
}