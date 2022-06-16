#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20

int main()
{
  char input [SIZE];
  char name[10]; 
  char ageString[10];
  
  int i;
  int age;
  
  printf("Enter name and age: ");
  fgets(input, 30, stdin);
  sscanf(input, "%s %s", &name, &ageString); // &variable refers to the address thats saved for variable so you can store information there
  
  sprintf(result, "%s", name, age); // store print
  printf("%s\n", result);
}
