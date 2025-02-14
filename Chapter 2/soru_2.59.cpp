#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter an odd number between 1 and 19: ";
    cin >> n;


    if (n < 1 || n > 19 || n % 2 == 0) {
        cout << "Invalid input. Program terminated." << endl;
        return 1;  // Geçersizse programdan çık
    }

  
    int center = (n + 1) / 2;


    for (int i = 1; i <= n; i++) {

        int spaceCount;
        if (i <= center)
            spaceCount = center - i;   
        else
            spaceCount = i - center;  

     
        int starCount = n - 2 * spaceCount;

       
        for (int j = 0; j < spaceCount; j++) {
            cout << ' ';
        }
        
        for (int j = 0; j < starCount; j++) {
            cout << '*';
        }
        cout << '\n'; 
    }

    return 0;
}
