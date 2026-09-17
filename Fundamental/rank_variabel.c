#include <stdio.h>

char grade;
float score;
char nama [50];

int main() {
    printf("Masukkan nama siswa: ");
    scanf(" %48s", nama);

    printf("Masukkan Nilai %s: ", nama);
    scanf ("%f", &score);

    if (score >= 90) {
        grade = 'A';
        printf("Nilai %s adalah %.2f dan mendapatkan grade %c\n", nama, score, grade);
    }

    else if (score >= 80) {
        grade = 'B';
        printf("Nilai %s adalah %.2f dan mendapatkan grade %c\n", nama, score, grade);
    }
    else if (score >= 70) {
        grade = 'C';
        printf("Nilai %s adalah %.2f dan mendapatkan grade %c\n", nama, score, grade);
    }
    else if (score >= 60) {
        grade = 'D';
        printf("Nilai %s adalah %.2f dan mendapatkan grade %c\n", nama, score, grade);
    }
    else {
        grade = 'E';
        printf("Nilai %s adalah %.2f dan mendapatkan grade %c\n", nama, score, grade);
    }
    return 0;
}
