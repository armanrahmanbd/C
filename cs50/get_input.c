#include <stdio.h>

int main(void)
{
  // Prompt user for their name
  char name[20];
  printf("What is your name? ");
  scanf("%s", name);
  // Greet the user
  printf("Hello, %s!\n", name);
  // Prompt user for their age
  int age;
  printf("How old are you? ");
  scanf("%d", &age);
  // Display user's age
  printf("You are %d years old.\n", age);
  
  return 0;
}