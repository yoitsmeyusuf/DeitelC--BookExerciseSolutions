#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int n1, n2, result,answ;
    n1 = rand() % 9 + 1;
    n2 = rand() % 9 + 1;
    result = n1 * n2;

    cout<<"How much is "<<n1<<" times "<<n2<<endl;
    cin>>answ;
    if(answ == result){
        cout<<"Very Good!";
    }
    while(answ != result){
        cout<<"Please try again."<<endl;
        cin>>answ;
        if(answ == result){
            cout<<"Very Good!";
            
        }
    }
    
}