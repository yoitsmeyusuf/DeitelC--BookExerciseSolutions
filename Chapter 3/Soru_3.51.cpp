#include <iostream>

using namespace std; 


int mystery(int, int); 

int main() {
    int x, y;
    
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "The result is " << mystery(x, y) << endl;

    return 0;
}

int mystery(int a, int b) {
    if (b == 0)  
        return 0;
    if (b > 0)  
        return a + mystery(a, b - 1);
    else        
        return -mystery(a, -b);
}
