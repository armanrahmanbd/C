#include <stdio.h>

int main(void)
{
  // Prompt user for their name
  char name[20];
  printf("What is your name? ");
  scanf("%s", name);
  // Greet the user
  printf("Hello, %s!\n", name);
  return 0;
}