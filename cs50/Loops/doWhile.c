#include <stdio.h>

void get_name(char name[]);
int get_times(void);
void print_name(int times, char name);

int main(void)
{
  char name[20];
  int times;

  get_name(name);
  times = get_times();
  print_name(times, name);
}

void get_name(char name[])
{
  printf("Give a word to print: ");
  scanf("%s", name);
}

int get_times(void)
{
  int times = 0;
  printf("How many times?: ");
  scanf("%d", &times);
  return times;
}

void print_name(int times, char name)
{
  for (int i = 0; i < times; i++)
  {
    printf("%s\n", name);
  }
}
