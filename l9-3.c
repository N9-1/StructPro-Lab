#include <stdio.h>
#include <math.h>

typedef struct {
	int num_1000;
    int num_500;
    int num_100;
    int num_50;
    int num_20;
    int num_10;
    int num_1;
}change;

// func that have struct of change
change calchange(int a) {
	change cal;
	cal.num_1000 = a / 1000;
    a %= 1000;
    cal.num_500 = a / 500;
    a %= 500;
    cal.num_100 = a / 100;
    a %= 100;
    cal.num_50 = a / 50;
    a %= 50;
    cal.num_20 = a / 20;
    a %= 20;
    cal.num_10 = a / 10;
    a %= 10;
    cal.num_1 = a;
    
    return cal;
}

int main() {
	int i,j,k,n;
	change result;
	scanf("%d", &n);
	
	result = calchange(n);
	printf("%d %d %d %d %d %d %d ", result.num_1000, result.num_500, result.num_100, result.num_50, result.num_20, result.num_10, result.num_1);
}
