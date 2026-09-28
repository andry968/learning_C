#include <stdio.h>
// Roller Coaster Ride Eligibility Checker

int main() {
    int age = 0, height = 0;
    int hasAdult = 0;
    int method = 0;

    printf("Input 1 = nested, 2 = ternary: ");
    scanf("%d", &method);

    printf("Age: ");
    scanf("%d", &age);

    printf("Height: ");
    scanf("%d", &height);

    printf("Has Adult (1 = yes, 0 = no): ");
    scanf("%d", &hasAdult);

    // if + nested if version
    if (method == 1) {
        if (age >= 12) {
            if (height > 150) {
                if (age < 15) {
                    if (hasAdult != 1) {
                        printf("Sorry, you need an adult with you");
                    }
                    else {
                        printf("You can ride with adult supervision!");
                    }
                }
                else {
                    printf("You can ride by yourself!");
                }
            }
            else {
                printf("Sorry, you are not tall enough");
            }
        }
        else {
            printf("Sorry, you are too young");
        }
    }

    // if - else if + ternary operator version
    else {
        if (age < 12) {
            printf("Sorry, you are too young");
        }
        else if (height <= 150) {
            printf("Sorry, you are not tall enough");
        }
        else if (age < 15) {
            printf(hasAdult != 1 ? "Sorry, you need an adult with you"
                                 : "You can ride with adult supervision!");
        }
        else {
            printf("You can ride by yourself!");
        }
    }

    return 0;
}
