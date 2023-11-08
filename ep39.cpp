#include<stdio.h>

int main()
{
    int x, y, z, r, i, j,gcd;
    char ch;

    // เพิ่มตัวแปรตัวใหม่ชื่อ `count` เพื่อนับจำนวนครั้งที่กด Y
    int count = 0;

    // เพิ่มลูป while เพื่อวนซ้ำจนกว่าผู้ใช้จะกด N
    while (ch != 'N') {

        // แสดงข้อความแจ้งให้ผู้ใช้ป้อนค่า x และ y
        printf("Enter two number:");
        scanf("%d %d", &x, &y);

        // คำนวณค่า gcd
        while (y != 0) {
            r = x % y;
            x = y;
            y = r;
        }

        // แสดงค่า gcd
        printf("gcd=%d\n", x);

        // เพิ่มเงื่อนไขเพื่อตรวจสอบว่าผู้ใช้กด Y
        if (ch == 'Y' || ch == 'y') {
            count++;
        }

        // แสดงข้อความแจ้งให้ผู้ใช้เลือกว่าจะคำนวณ gcd ใหม่หรือไม่
        printf("Find new gcd(Y/N)? :>");
        scanf(" %c", &ch);
    }

    // แสดงจำนวนครั้งที่กด Y
    printf("Total count: %d\n", count);

    // เพิ่มโค้ดเพื่อแสดงผลลัพธ์ในโปรแกรม Excel
    FILE *fp;
    fp = fopen("result.xlsx", "w");

    // เขียนหัวตาราง
    fprintf(fp, "x\ty\tgcd\n");

    // เขียนข้อมูลในตาราง
    for (i = 0; i < count; i++) {
        fprintf(fp, "%d\t%d\t%d\n", x, y, gcd);
    }

    // ปิดไฟล์
    fclose(fp);

    return 0;
}
