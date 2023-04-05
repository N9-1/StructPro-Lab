#include <stdio.h>
#include <math.h>

int main() {
	int i,j,k,n,x,_sum=0;

	scanf("%d %d", &x, &n);
	
	for(i=1;i<=n;i++) _sum += pow(x,i);
	
	printf("%d", _sum+1);
}
