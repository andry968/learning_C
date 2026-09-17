#include <stdio.h>

int pin;

int main ()
{
  while (pin != 1234)
    {
      printf("Masukkan pin anda: \n");
      scanf("%d", &pin);
    }
  printf("Pin anda benar!");
}