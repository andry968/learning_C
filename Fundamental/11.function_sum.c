#include <stdio.h>

// Made function checking prime
int isPrime(int n) {
    if (n < 2) return 0;

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

// Sum the primes (2 input)
int sumOfPrimes(int start, int end) {
    int sum = 0;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int start, end;

    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input\n");
        return 0;
    }

    if (start <= 0 || end <= 0 || start >= end) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the sum function
    printf("%d\n", sumOfPrimes(start, end));

    return 0;
}
