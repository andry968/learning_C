#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    /*
    while (condition) {
    code to be repeated
    }
    */
  
    int i = 2;
    while (i <= n ) {
        printf(" %d", i);
        ++i;
        ++i;
    }
    
    return 0;
}
