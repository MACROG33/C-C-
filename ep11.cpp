#include <stdio.h>

int main() {
  // ประกาศตัวแปร
  int total_price, coupon_value, coupon_count_100, coupon_count_10;

  // กำหนดค่าเริ่มต้นของตัวแปร
  total_price = 0.0;
  coupon_value = 0.0;
  coupon_count_100 = 0;
  coupon_count_10 = 0;

  // รับค่าราคารวมจากผู้ใช้
  printf("Enter the total price: ");
  scanf("%f", &total_price);

  // ตรวจสอบว่าราคารวมมากกว่า 5000 บาทหรือไม่
  if (total_price >= 5000.0) {
    // คำนวณมูลค่าคูปอง
    coupon_value = (float)total_price * 0.13;

    // คำนวณจำนวนคูปองมูลค่า 100 บาท
    coupon_count_100 = (int) (coupon_value / 100);

    // คำนวณจำนวนคูปองมูลค่า 10 บาท
    coupon_count_10 = (int) ((coupon_value % 100) / 10);
  }

  // แสดงมูลค่าคูปองทั้งหมด
  printf("The total coupon value is %f.\n", coupon_value);

  // แสดงจำนวนคูปองมูลค่า 100 บาท
  printf("The number of 100 baht coupons is %d.\n", coupon_count_100);

  // แสดงจำนวนคูปองมูลค่า 10 บาท
  printf("The number of 10 baht coupons is %d.\n", coupon_count_10);

  return 0;
}
