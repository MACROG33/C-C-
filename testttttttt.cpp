#include <stdio.h>

int main() {

    /*
    s : base = 11.25, sell = 15
    m : base = 15.50, sell = 20
    l : base = 19.75, sell 25
    */

    int s = 0, m = 0, l = 0, n;
    float money, profit;
    char mySize;

    scanf("%d", &n);

    while (n > 0) {

        scanf(" %c", &mySize);

        if (mySize == ('l' || 'L')) {
            l++;
        } else if (mySize == ('m' || 'M')) {
            m++;
        } else {
            s++;
        }

        n--;
    }

    money = (s * 15.0) + (m * 20.0) + (l * 25.0);
    profit = money - ((s * 11.25) + (m * 15.50) + (l * 19.75));

    printf("S=%d\tM=%d\tL=%d\n", s, m, l);
    printf("Money = %.2f THB.\nProfit = %.2f THB.", money, profit);

    return 0;
}
