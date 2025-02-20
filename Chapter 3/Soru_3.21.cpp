#include <iostream>
 
bool arrayeven(int a[], int size);
bool even(int a);

int main(){
    //use arrayeven and write

    int a[5] = {2, 4, 6, 8, 10};

    if (arrayeven(a, 5)){
        std::cout << "a is even" << std::endl;
    }
    else{
        std::cout << "a is not even" << std::endl;
    }




}
bool arrayeven(int a[], int size){
    for (int i = 0; i < size; i++){
        if (a[i] % 2 != 0){
            return false;
        }
    }
    return true;

}

bool even(int a){
    if (a % 2 == 0){
        return true;
    }
    else{
        return false;
    }

}