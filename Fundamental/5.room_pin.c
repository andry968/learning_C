#include <stdio.h>
#include <string.h>

char nama[50];
int pin;

int main(void)
{
  printf("Masukkan Nama Anda: ");
  if (scanf("%48s", nama) !=1 ) 
  {
    printf("Format tidak sesuai, Validasi ulang input");
  }
  else if (strcmp(nama, "Andry") == 0)
  {
    printf("Nama terdaftar, silahkan masukkan PIN anda: \n");

    scanf("%d", &pin);
    
    while (pin != 1234)
    {
      printf("Input tidak valid! Silahkan masukkan ulang PIN\n");
      scanf("%d", &pin);
    }

    printf("Berhasil Masuk!");
  }
}
