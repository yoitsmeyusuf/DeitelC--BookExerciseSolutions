#include <iostream>
bool ismultiple(int a, int b);

int main(){
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (ismultiple(a, b)){
        std::cout << a << " is a multiple of " << b << std::endl;
    }
    else{
        std::cout << a << " is not a multiple of " << b << std::endl;
    }
    return 0;

}
bool ismultiple(int a , int b){
    if (a % b == 0 || b % a == 0){
        return 1;
    }
    else{
        return 0;
    }
}