#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int n1, n2, result,answ;
    n1 = rand() % 9 + 1;
    n2 = rand() % 9 + 1;
    result = n1 * n2;
    int response_true,response_false;

    cout<<"How much is "<<n1<<" times "<<n2<<endl;
    cin>>answ;
    if(answ == result){
    response_true = rand() % 4 + 1;
        switch(response_true){
            case 1:
            cout<<"Very Good!";
            break;

            case 2:
            cout<<"Excellent!";
            break;

            case 3:
            cout<<"Nice Work!";
            break;

            case 4:
            cout<<"Keep up the good work";
            break;
        }
    }
    while(answ != result){
        response_false = rand() % 4 + 1;
        switch(response_false){
            case 1:
            cout<<"No. Please try again."<<endl;
            break;

            case 2:
            cout<<"Wrong. Try once more"<<endl;
            break;

            case 3:
            cout<<"Don't give up"<<endl;
            break;

            case 4:
            cout<<"No. Keep trying"<<endl;
            break;
            
        }
        cin>>answ;
        if(answ == result){
            cout<<"Very Good!";
            
        }
    }
}