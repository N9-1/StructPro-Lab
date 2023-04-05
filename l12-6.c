#include <stdio.h>
#include <math.h>


int main() {
	int i,j,k,n, _max= -9999, count=0;

	scanf("%d", &n);
	 
	
	for(i=0;i<n;i++) {
		scanf("%d", &j);
		if(j > _max) {
			count = 1;
			_max = j;
		}
		else if(j == _max) {
			count += 1;
		}
	}

	printf("%d %d", _max, count);
}
