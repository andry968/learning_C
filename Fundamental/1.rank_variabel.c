#include <stdio.h>

char grade;
float score;
char nama [50];

int main() {
    printf("Enter student name: ");
    scanf(" %48s", nama);

    printf("Enter %s's score: ", nama);
    scanf ("%f", &score);

    if (score >= 90) {
        grade = 'A';
        printf("%s's score is %.2f and gets grade %c\n", nama, score, grade);
    }

    else if (score >= 80) {
        grade = 'B';
        printf("%s's score is %.2f and gets grade %c\n", nama, score, grade);
    }
    else if (score >= 70) {
        grade = 'C';
        printf("%s's score is %.2f and gets grade %c\n", nama, score, grade);
    }
    else if (score >= 60) {
        grade = 'D';
        printf("%s's score is %.2f and gets grade %c\n", nama, score, grade);
    }
    else {
        grade = 'E';
        printf("%s's score is %.2f and gets grade %c\n", nama, score, grade);
    }
    return 0;
}
