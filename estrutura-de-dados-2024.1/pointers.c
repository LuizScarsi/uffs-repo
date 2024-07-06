#include <stdio.h>

int main()
{
  // A pointer stores the memory address of another variable as its value
  // A pointer variable points to a data type of the same type (like int)
  
  int myAge = 25;
  int* ptr = &myAge;
  printf("Value of myAge: %d\n", myAge);
  printf("Memory address of myAge: %p\n", &myAge);
  printf("Memory address printing the pointer: %p\n", ptr);
  printf("Pointer stored value: %d\n", *ptr);

  myAge = 30;
  printf("New age: %d\n", myAge);
  printf("Pointer stored value: %d\n", *ptr);

  *ptr = 43;
  printf("Age: %d\n", myAge);
  printf("Pointer stored value: %d\n", *ptr);

  myAge = 1;
  printf("New age: %d\n", myAge);
  printf("Pointer stored value: %d\n", *ptr);

  return 0;
}
