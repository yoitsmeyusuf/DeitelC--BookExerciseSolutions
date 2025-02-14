#include <iostream>
using namespace std;
int main(){
    // If we doesnt want to use continue operetor we can simply change the statemant 
    // let me give you an example
    // If we want to print only odd numbers 

    int count = 20;
    for (int i = 1; i <= count; i++) {
        if (i % 2 == 0) { 
            continue;
        }
        cout << i << " is odd." << endl;
    }
    // we can simply change this code to this code
    for (int i = 1; i <= count; i++) {
        if (i % 2 != 0) { 
            cout << i << " is odd." << endl;
        }
    }
    // This code will give us the same output as the first code and we didnt use the continue operator
    return 0;
    
}