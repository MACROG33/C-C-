#include <stdio.h>
#include <time.h>

int main() {
  struct timespec start, end;
  clock_gettime(CLOCK_REALTIME, &start);
  int number = rand() % 10000 + 1;
  for (int i = 1; i <= 10000; i++) {
    if (i == number) {

      break;
    }
  }
    clock_gettime(CLOCK_REALTIME, &end);


  printf("เลขสุ่ม คือ %d\n", number);
  printf("โปรแกรมใช้เวลาค้นหา = %.2f วินาที\n",
         (end.tv_sec - start.tv_sec) +
         (end.tv_nsec - start.tv_nsec) / 1000000000.0);

  return 0;
}
