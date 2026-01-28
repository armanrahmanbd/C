#include <stdio.h>
int main(void)
{
  char name[20] = "";
  printf("Give a word to print it x times: ");
  scanf("%s", name);

  int x = 0;
  printf("How many times?: ");
  scanf("%i", &x);

  // Uses of While loop to print my name x times
  int count = 0;
  while (count < x)
  {
    printf("%s\n", name);
    count++;
  }
}