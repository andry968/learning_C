#include <stdio.h>

//prototype
int calculateArea(int length, int width);

int main() {
    int length; int width;
    scanf("%d %d", &length, &width);
    
    // Call function
    int result = calculateArea(length, width);
    printf("%d", result);
    return 0;
}

// definiton
int calculateArea(int length, int width) {
    return length * width;
}

/* Prototype format
return_type function_name(tipe_param1, tipe_param2, ...);
*/
