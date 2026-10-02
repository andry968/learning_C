#include <stdio.h>

int main() {
    float weight, height, bmi;
    int weight_result, height_result;
    weight_result = scanf("%f", &weight);
    height_result = scanf("%f", &height);

    // Validate
    if (height_result != 1 || weight_result != 1) {
        printf("Invalid input type!\n");
        return 0;
    }

    if (weight < 30 || weight > 300) {
        printf("Weight out of range!\n");
        return 0;
    }
    

    if (height < 1.0 || height > 2.5) {
        printf("Height out of range!\n");
        return 0;
    }

    // Calculate BMI
    bmi = weight / (height * height);

    // Determine weight category with t*rnary (we love t*rnary instead if else)
    const char *category = (bmi < 18.5) ? "Underweight" : 
                           (bmi < 25.0) ? "Normal weight" : 
                           (bmi < 30.0) ? "Overweight" : "Obese"; 
    
    // Print
    printf("BMI: %.1f\n", bmi);
    printf("Category: %s\n", category);
    
    return 0;
}
