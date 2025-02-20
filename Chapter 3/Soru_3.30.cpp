#include <iostream>
#include <cmath>

using namespace std;

void isPrime(int number);

int main(){
   /* int n;
    cout<<"Please enter a number:";
    cin>>n;
    isPrime(n);*/

    for(int i = 2; i <= 10000; i++){
        int kontrol = 0;
        for(int j = 1;j <= sqrt(i);j++){
            if(i % j == 0){
                kontrol += 1;
            }
        }
        if(kontrol == 1){
            cout<<"Asal Sayi:"<<i<<endl;
        }
    }

    

}
void isPrime(int number){
    int kontrol = 0;
    for(int i = 2; i <=sqrt(number); i++){
        if(number % i == 0){
            kontrol += i;
        }
    }
    if(kontrol == 0){
        cout<<"Asal Sayi:"<<number<<endl;
    }
}