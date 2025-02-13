#include <iostream> 

int main(){
    int counter=10, number, largest, secondlargest;

    largest = 0;
    secondlargest = 0;
    for (int i = 0; i < counter; i++)
    {
      std::cout << "Enter number: ";
      std::cin >> number;
      if (number > largest)
      {
        secondlargest = largest;
        largest = number;
      }
      
    }
    printf("Largest number is: %d\n", largest);
    printf("Second largest number is: %d\n", secondlargest);
    



}
