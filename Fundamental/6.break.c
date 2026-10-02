#include <stdio.h>

int guess;
int answer = 25;

int main (void)
{
  printf("Enter your guess 1-50\n");
  scanf("%d", &guess);
  if (guess == answer)
  {
      printf("Congrats, you got it on the first try!\n <⁠(⁠￣⁠︶⁠￣⁠)⁠>");
  }

  // Can use != instead, but in this case i want to learn || / or
  while (guess > answer || guess < answer)
    {
      printf("Your answer isn't quite right\n");
      scanf("%d", &guess);
      
      if (guess == answer)
      {
        printf("You got it!");
        break;
      }
    }
}
