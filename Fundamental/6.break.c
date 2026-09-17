#include <stdio.h>

int guess;
int answer = 25;

int main (void)
{
  printf("Masukkan tebakan anda 1-50\n");
  scanf("%d", &guess);
  if (guess == answer)
  {
      printf("Selamat anda benar di percobaan pertama!\n <⁠(⁠￣⁠︶⁠￣⁠)⁠>");
  }

  // Can use != instead, but in this case i want to learn || / or
  while (guess > answer || guess < answer)
    {
      printf("Jawaban anda kurang tepat\n");
      scanf("%d", &guess);
      
      if (guess == answer)
      {
        printf("Anda benar!");
        break;
      }
    }
}
