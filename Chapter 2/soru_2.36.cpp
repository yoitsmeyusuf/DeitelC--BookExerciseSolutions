#include <iostream>

using namespace std;

int main(){
    int side1, side2, side3;
    cout<<"Enter three integers: ";
    cin>>side1>>side2>>side3;
    if(side1>0 && side2>0 && side3>0){
        if(side1^2+side2^2==side3^2 && side1^2+side3^2==side2^2 && side2^2+side3^2==side1^2){
            cout<<"The values represent the right of a triangle."<<endl;
        }
        else{
            cout<<"The values do not represent the right of a triangle."<<endl;
        }
    }
    else{
        cout<<"All values must be nonzero and positive."<<endl;
    }
}