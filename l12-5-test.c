#include <stdio.h>

int main() {
    int n, a0, a1, k;
    printf("Enter the value of n, a0 and a1:\n");
    scanf("%d %d %d", &n, &a0, &a1);

    int ak_2 = a0, ak_1 = a1, ak;
    printf("%d %d", ak_2, ak_1);

    for(k=2; k<=n; k++) {
        ak = k*k + ak_1 - ak_2 + (3*k);
        printf(" %d", ak);
        ak_2 = ak_1;
        ak_1 = ak;
    }
    printf("\n");

    return 0;
}

