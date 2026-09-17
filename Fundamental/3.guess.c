#include <stdio.h>

int guess;
int answer = 25;

int main (void)
{
  printf("Tebak angka 1-50!\n Masukkan Angka: ");
  
  scanf("%d", &guess);

  while (guess > answer)
    {
      printf("%d Terlalu besar", guess);
      scanf("%d", &guess);
    }
  while (guess < answer)
    {
      printf("%d Terlalu kecil", guess);
      scanf("%d", &guess);
    }
  printf ("%d Selamat anda benar!", guess);
}
