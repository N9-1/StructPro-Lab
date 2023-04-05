#include <stdio.h>
#include <math.h>

int recur(int n) {
	if(n <= 3) return 1;
	
	return recur(n-2) + recur(n-3);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d",((pow(2,n-3) + 1) / 3));
}
