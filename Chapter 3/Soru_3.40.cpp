#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int exponent);

int main()
{
    int deger = power(3,3);
    cout<<deger;
}

int power(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    return base = base * power(base,(exponent - 1));
}