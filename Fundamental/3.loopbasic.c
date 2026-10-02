#include <stdio.h>

int pin;

int main ()
{
  while (pin != 1234)
    {
      printf("Enter your pin: \n");
      scanf("%d", &pin);
    }
  printf("Pin correct!");
}
