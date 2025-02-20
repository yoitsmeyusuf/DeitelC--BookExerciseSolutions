#include <iostream>
int exponent(int base, int power);
int main(){
std::cout << exponent(2, 3) << std::endl;
return 0;

}
int exponent(int base, int power){
    int result = 1;
    for (int i = 0; i < power; i++){
        result *= base;
    }
    return result;
}