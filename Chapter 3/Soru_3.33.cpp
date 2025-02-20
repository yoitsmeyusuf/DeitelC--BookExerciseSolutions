#include <iostream>

using namespace std;

int qualityPoints(int point);

int main(){
    int point;
    cout<<"Please enter a point:";
    cin>>point;
    int rtrn_point;
    rtrn_point = qualityPoints(point);
    cout<<"The Point is equal to: "<<rtrn_point;

    return 0;

}

int qualityPoints(int point){
   if(point >= 90 && point <= 100){
    return 4;
   }
   else if(point >= 80 && point < 90){
    return 3;
   }
   else if(point >= 70 && point < 80){
    return 2;
   }
   else if(point >= 60 && point < 70){
    return 1;
   }
   else{
    return 0;
   }
}