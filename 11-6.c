#include <stdio.h>
#include <math.h>

int main() {
	int i,j,k,n, r, c;

	scanf("%d %d", &r, &c);
	
	int m[r][c], _max= -9999, zone[] = {0,0,0,0};
	
	for(i=1;i<=r;i++) {
		for(j=1;j<=c;j++) {
			scanf("%d", &m[i][j]);
			
			if(i>r/2 && j>c/2) {
				zone[3] += m[i][j];
				if(zone[3] > _max) _max = zone[3];
			}
			else if(i>r/2) {
				zone[2] += m[i][j];
				if(zone[2] > _max) _max = zone[2];
			}
			else if(j>c/2) {
				zone[1] += m[i][j];
				if(zone[1] > _max) _max = zone[1];
			}
			else {
				zone[0] += m[i][j];
				if(zone[0] > _max) _max = zone[0];
			}
		}
	}
	
	printf("%d", _max);
}
