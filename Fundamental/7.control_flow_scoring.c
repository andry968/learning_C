#include <stdio.h>

//Here, we using if-else and switch statement, also ternary conditional
int main() {
    int score;
    scanf("%d", &score);
    if (score < 0 || score > 100) {
        printf("Invalid score");
    }
    else {
        switch (score / 10) {
            case 10:
            case 9:
                printf("A");
                break;
            case 8:
                printf("B");
                break;
            case 7:
                printf("C");
                break;
            case 6:
                printf("D");
                break;
            default:
                printf("F");
        }

        char *status = score >= 60 ? "Passed" : "Failed";
        printf("\nStatus: %s\n", status);
    }

    return 0;
}
