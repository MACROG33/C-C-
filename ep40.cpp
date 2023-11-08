#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // It's a prime number
}

int main() {
    int num;
    char ch;

    printf("This job is mine ID: 66011212003 Mr. Kitsanaphon Sukdee [S4-G13]\n");
    printf("Facebook ID: Kitsanaphon Sukdee NickName: Palm\n");

    for (;;) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("%d is a prime number.\n");
        } else {
            printf("%d is not a prime number.\n");
        }

        printf("-----------------------------\n");
        printf("Check another number (Y/N)? :> ");
        scanf(" %c", &ch);

        if (ch == 'N' || ch == 'n') {
            break;
        }
    }

    return 0;
}
