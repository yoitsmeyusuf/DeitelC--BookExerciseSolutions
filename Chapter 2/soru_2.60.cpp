#include <iostream>

int main(){


    //example for loop
    int count = 10;
    for (size_t i = 0; i < count; i++)
    {
        std::cout << i << std::endl;
        //break from the loop without using break operator
        
        if(i == 5){
            i = count;
        }

    }
    //example nested for loop
    //just make the condition false to break from the loop 
  
    
}