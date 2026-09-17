#include <stdio.h>

int main() {
// Dewasa boleh masuk, anak kecil tidak

  char member;
  
  int umur = 0;
  printf("Masukkan Umur kamu: ");

  if (scanf("%d", &umur) !=1)
  {
    printf("Input gak valid");
  }

  else if (umur >= 18 && umur <= 60)
  {
    printf("Anda berumur cukup, namun apakh anda bermember? (y/n): ");
    
    if (scanf(" %c", &member) != 1)
    {
      printf("Input tidak valid");
    }

    else if (member == 'y')
    {
      printf("Anda berumur %d, dan memiliki member. Silahkan masuk", umur);
    }

    else if (member == 'n')
    {
      printf("Silahkan berlangganan member dahulu");
    }

    else
    {
      printf("Input tidak valid");
    }
  }

  else if (umur < 0)
  {
    printf("Angka tidak valid");
  }

  else
  {
    printf("Anda berumur %d, Anda belum cukup umur", umur);
  }

  return 0;
}
