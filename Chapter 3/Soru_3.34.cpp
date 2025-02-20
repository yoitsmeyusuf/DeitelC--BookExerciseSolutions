#include <iostream>
#include <ctime>

using namespace std;

enum Status{HEADS,TAILS};


int flip();
string statusToString(Status s);

int main(){
    int result;
    result = flip();
    Status game_status;

    if(result == 0){
        game_status = TAILS;
    }
    else if(result == 1){
        game_status = HEADS;
    }
    cout<<statusToString(game_status);


}
string statusToString(Status s){
    if(s == HEADS){
        return "HEADS";
    }
    else{
        return "TAILS";
    }
}

int flip(){
    srand(time(0));
    int result = rand() % 2;
    return result;
}