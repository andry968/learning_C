#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
  
    /* basic for loop
    for (initialization; condition; update) {
    // code to be executed
    }*/
  
    for (int i = 1; i <= n; ++i) {
        printf("%d ", i);
    }
    
    return 0;
}
