#include <stdio.h>
#include <string.h>

#define SIZE 10 // can be used to create a final variable/ set size variable
#define SIZE 20

int main()
{
  char input[SIZE2];
  char name[SIZE]; // the max size for name is 10 in this case
  int age = 0;
  
  printf("Enter name and age (exit to quit): "); 
    // -> retrieve an input i.e: 'Bob 10" -> this string is 7 in size so it fits in input range
  fgets(input, 40, stdin); // retrieve input
  sscanf(input, "%s %d", name, &age);
  
  printf("Name: %s\nAge: %d\n", name, age)
  
  
}

