#include <stdio.h>
#include <math.h>

int main() {
	int i,j,k,n, r, c;

	scanf("%d %d", &r, &c);
	
	int m[r][c], _max= -9999, _sum;
	
	// input
	for(i=0;i<r/2;i++) {
		for(j=0;j<c/2;j++) {
			scanf("%d", &m[i][j]);
		}
	}
	
	int a[r*2][c/2]
	
	for(k=0;k<r*2;k++) {
		// zone
		_sum = 0;
		for(i=0;i<r/2;i++) {
			// row
			for(j=0;j<c/2;j++) {
				//col
				scanf("%d", &a[i][j]);
				_sum += a[i][j];
			}
		}
		if(_sum > _max) _max = _sum;
	}
	printf("%d", _sum);
}
