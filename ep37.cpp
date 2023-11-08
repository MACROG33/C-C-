#include <stdio.h>
#include <math.h>

int main() {
  // ประกาศตัวแปร number และ flag
  int number, flag = 1,i;

  // วนลูปไปเรื่อยๆ จนกว่าผู้ใช้จะตอบ n
  while (flag) {
    // รับค่า number จากผู้ใช้
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // ตรวจสอบว่า number เป็นจำนวนเฉพาะหรือไม่
    if (number <= 1) {
      printf("%d is not a prime number.\n", number);
    } else {
      // วนลูปตั้งแต่ 2 ถึง sqrt(number)
      for (int i = 2; i <= sqrt(number); i++) {
        // หาก number หารลงตัวด้วย i
        if (number % i == 0) {
          // number ไม่ใช่จำนวนเฉพาะ
          printf("%d is not a prime number.\n", number);
          flag = 0;
          break;
        }
      }
      // หาก number ไม่หารลงตัวด้วย i ใดๆ
      // number เป็นจำนวนเฉพาะ
      if (i > sqrt(number)) {
        printf("%d is a prime number.\n", number);
        flag = 0;
      }
    }

    // แสดงคำตอบ
    printf("The answer is %d.\n", number);

    // ถามผู้ใช้ว่าต้องการที่จะหาอีกไหม
    printf("Find another prime number? (y/n): ");
    char c;
    scanf(" %c", &c);
    flag = (c == 'y');
  }

  return 0;
}
