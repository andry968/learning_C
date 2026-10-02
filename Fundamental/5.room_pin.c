#include <stdio.h>
#include <string.h>

char nama[50];
int pin;

int main(void)
{
  printf("Enter your name: ");
  if (scanf("%48s", nama) !=1 ) 
  {
    printf("Invalid format, try again");
  }
  else if (strcmp(nama, "Andry") == 0)
  {
    printf("Name registered, enter your PIN: \n");

    scanf("%d", &pin);
    
    while (pin != 1234)
    {
      printf("Invalid input! Enter PIN again\n");
      scanf("%d", &pin);
    }

    printf("Login successful!");
  }
}
