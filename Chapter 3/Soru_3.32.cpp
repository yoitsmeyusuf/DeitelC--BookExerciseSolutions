#include <iostream>

using namespace std;

int gcd(int n1, int n2);

int main(){
    int n1, n2;
    cout<<"Please enter two integers:"<<endl;
    cin>>n1>>n2;
    gcd(n1, n2);

}
int gcd(int n1, int n2){
    int gcd = 0;
    int length = 0;
    length = n1;
    if(n2 > n1){
        length = n2;
    }

    for(int i = 1; i <= n2/2;i++){
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }

    }
     cout<<"The Best Common Divisor is: "<<gcd;

}