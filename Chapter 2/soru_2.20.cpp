#include <iostream> 

int main(){
    int counter=10, number, largest;
    largest = 0;
    for (int i = 0; i < counter; i++)
    {
      std::cout << "Enter number: ";
      std::cin >> number;
      if (number > largest)
      {
        largest = number;
      }
      
    }
    printf("Largest number is: %d\n", largest);
    



}
