#include <stdio.h>

// ฟังก์ชันสำหรับคำนวณ GCD โดยใช้ Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("x ");
    scanf("%d", &num1);

    printf("y: ");
    scanf("%d", &num2);

    int result = gcd(num1, num2);
    printf("GCD %d  %d  %d\n", num1, num2, result);

    return 0;
}
