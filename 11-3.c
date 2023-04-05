#include <stdio.h>
#include <math.h>

int main() {
	int i,j,k,n;

	scanf("%d", &n);
	
	int count[n];
	int _max = -9999;
	int c;
	int t[999];
	
	for(i=0;i<n;i++) {
		scanf("%d", &c);
		count[i] = 1;
		
		for(j=0;j<c;j++) {
			scanf("%d", &t[j]);
		}
		
		_max = t[c-1];
		
		for(k=c-1;k>=0;k--){
			
			if(t[k] > _max){
				count[i] += 1;
				_max = t[k];
			}
		}

		printf("%d\n", count[i]);
	}
	
}
