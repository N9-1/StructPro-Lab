#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    int num_1000 = a / 1000;
    a %= 1000;
    int num_500 = a / 500;
    a %= 500;
    int num_100 = a / 100;
    a %= 100;
    int num_50 = a / 50;
    a %= 50;
    int num_20 = a / 20;
    a %= 20;
    int num_10 = a / 10;
    a %= 10;
    int num_1 = a;

    printf("%d %d %d %d %d %d %d ", num_1000, num_500, num_100, num_50, num_20, num_10, num_1);

    return 0;
}

