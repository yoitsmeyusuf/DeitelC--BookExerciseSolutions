#include <iostream>
using namespace std;

int tripleByValue(int count);
void tripleByReference(int& count);

int main() {
    int count = 5;  

    cout << "Original count: " << count << endl;

    int newCountValue = tripleByValue(count);
    cout << "After tripleByValue, count is: " << newCountValue << endl;
    cout << "Original count after tripleByValue: " << count << endl;  

    tripleByReference(count);
    cout << "After tripleByReference, count is: " << count << endl;  
    return 0;
}

void tripleByReference(int& count) {
    count = count * 3;  
}

int tripleByValue(int count) {
    count = count * 3;  
    return count;       
}