#include <iostream>

using namespace std;
int reversed(int number);

int main(){
    int n;
    cout<<"Please enter a number:";
    cin>>n;
    reversed(n);

}

int reversed(int number){
    /*1367
    d1 = 1367 / 1000 = 1
    1367 % 1000 = 367
    d2 = 367 / 100 = 3;
    367 % 100 = 67
    d3 = 67 / 10 = 6;
    d4 = 67 % 10 = 7
    d4+d3+d2+d1;

    */

    int d1, d2, d3, d4;
    
    if(number > 10 && number < 100){
        /*
        21
        21/10 = 2
        21%10 = 1
        */
        d1 = number / 10;
        d2 = number % 10;
        cout<<"The reversed is: "<<d2<<d1;

    }
    if(number >= 100 && number < 1000){
        //367
        d1 = number / 100;
        d2 = (number % 100) / 10;
        d3 = ((number % 100) % 10);
        cout<<"The reversed is: "<<d3<<d2<<d1;

    }
    if(number >= 1000 && number<10000){
        //1467
        d1 = number / 1000;
        d2 = (number % 1000) / 100;
        d3 = ((number % 1000) % 100) / 10;
        d4 = ((number % 1000) % 100) % 10;
        cout<<"The reversed is: "<<d4<<d3<<d2<<d1;
    }
    
}