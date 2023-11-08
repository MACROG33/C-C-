#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0, total = 0, inceptPositive = -1;
    float avgSpeed;

    scanf("%d", &n);

    int *speedContain = (int* )malloc(n * sizeof(int));
    int *speedCount = (int* )malloc(3 * sizeof(int));

    char **speedStatus = (char** )malloc(n * sizeof(char));
    char speedDisplay[4][100] = {"PASSES", "WARRING", "SPEED LIMITS", "ERROR"};

    char lineDisplay[2][20] = {"++++++++++++++++++", "=================="};

    for (int x = 0; x < 3; x++) {
        speedCount[x] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &speedContain[i]);
        if (speedContain[i] >= 0) {
            total += speedContain[i];
            inceptPositive++;
        }
    }

    printf("\nSPEED\t\tTYPE\n%s\n", lineDisplay[0]);

    for (int j = 0; j < n; j++) {
        if (speedContain[j] > 100) {
            speedStatus[j] = speedDisplay[2];
            speedCount[2] += 1;

        } else if (speedContain[j] >= 80) {
            speedStatus[j] = speedDisplay[1];
            speedCount[1] += 1;

        } else if (speedContain[j] > 0) {
            speedStatus[j] = speedDisplay[0];
            speedCount[0] += 1;

        } else {
            speedStatus[j] = speedDisplay[3];

        }

        printf("%d\t\t%s\n", speedContain[j], speedStatus[j]);
    }

    printf("%s\n", lineDisplay[0]);

    for (int k = 0; k < 3; k++) {
        if (k != 2) {
            printf("%s\t\t%d cars\n", speedDisplay[k], speedCount[k]);
        } else {
            printf("%s\t%d cars\n", speedDisplay[k], speedCount[k]);
        }
    }

    avgSpeed = (float)total / (float)inceptPositive;

    printf("%s\nAVERAGE SPEED %.2f KM/H", lineDisplay[1], avgSpeed);

    return 0;
}
