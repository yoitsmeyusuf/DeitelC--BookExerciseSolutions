#include <iostream>
using namespace std;
#include <cmath>


int main(){
    int binaryNumber, remainder, quotient;
    cout<<"Enter a binary number: ";
    cin>>binaryNumber;
    int decimalNumber = 0, i = 0;
    while(binaryNumber!=0){
        remainder = binaryNumber%10;
       
        decimalNumber += remainder*pow(2,i);
        i++;
        binaryNumber = binaryNumber/10;
    }
    cout<<"The decimal number is: "<<decimalNumber<<endl;
}