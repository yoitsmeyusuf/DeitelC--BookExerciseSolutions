#include <iostream>
#include <cmath>
double hypotenus(double a, double b);

int main(){
std::cout << hypotenus(3, 4) << std::endl;
return 0;
}

double hypotenus(double a, double b){
    return sqrt(a*a + b*b);
}