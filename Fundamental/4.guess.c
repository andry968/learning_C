#include <stdio.h>

int guess;
int answer = 25;

int main (void)
{
  printf("Guess a number 1-50!\n Enter a Number: ");
  
  scanf("%d", &guess);

  while (guess > answer)
    {
      printf("%d Too big", guess);
      scanf("%d", &guess);
    }
  while (guess < answer)
    {
      printf("%d Too small", guess);
      scanf("%d", &guess);
    }
  printf ("%d Congratulations, you got it right!", guess);
}
