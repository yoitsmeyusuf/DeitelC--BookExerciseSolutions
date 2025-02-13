
#include <iostream>
using namespace std;

int main(){
int number, originalNumber, reversednumber=0, temp;
cout<<"Palindrome check program "<<endl;
cout<<"Enter a number: "<<endl;
cin>>number;
originalNumber = number;
while(number>0){
    temp=number%10;
    reversednumber=reversednumber*10+temp;
    number=number/10;
}
if(originalNumber==reversednumber){
    cout<<"The number is a palindrome."<<endl;
}
else{
    cout<<"The number is not a palindrome."<<endl;}
    cout<<"The number is not a palindrome"<<endl;
    return 0;
}



