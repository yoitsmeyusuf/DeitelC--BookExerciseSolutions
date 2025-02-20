#include <iostream>
#include <cmath>
#include <random>
#include <time.h>


int main(){
 srand(time(NULL));


    int a1[5] = {2, 4, 6, 8, 10};
    int a2[5] = {3, 5, 7, 9, 11};
    int a3[5] = {6, 10, 14, 18, 22};
    int random = rand() % 5;
    std::cout << "a1[" << random << "] = " << a1[random] << std::endl;
    std::cout << "a2[" << random << "] = " << a2[random] << std::endl;
    std::cout << "a3[" << random << "] = " << a3[random] << std::endl;

}