#include <stdio.h>

int main() {
    int n, k, d, count = 0;
    scanf("%d", &n);

    for (d = 0; d < n; d++) {
        k = 0;
        int kk = n - (d * d);

        while (k <= kk) {
            int result = 1;
            int i;
            for (i = 0; i < k; i++) {
                result *= k;
            }

            if (kk == result) {
                count++;
                printf("k is %d and d is %d", k, d);
                break;
            }
            k++;
        }
    }

    if (count > 0) {
        printf("\nYes");
    } else {
        printf("\nNo");
    }

    return 0;
}