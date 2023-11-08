#include <stdio.h>

int gcd(int a, int b) {
  // วนซ้ำจนกว่า b จะเท่ากับ 0
  while (b > 0) {
    // สลับค่า a และ b
    int temp = a;
    a = b;
    b = temp % b;
  }

  // ห.ร.ม คือ a
  return a;
}

int main() {
  // รับค่าสองจำนวน
  int a, b;
  printf("ป้อนจำนวน a: ");
  scanf("%d", &a);
  printf("ป้อนจำนวน b: ");
  scanf("%d", &b);

  // หา ห.ร.ม
  int g = gcd(a, b);

  // แสดงผลลัพธ์
  printf("ห.ร.ม ของ %d และ %d คือ %d\n", a, b, g);

  return 0;
}

