#include <stdio.h>
#include <math.h>


int main() {
	int i,j,k,n, _max= -9999, result=0;

	scanf("%d", &n);
	 
	int num[999];
	for(i=0;i<n;i++) {
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<n;i++) {
		result=0;
		
//		for(j=0;j<n;j++) {
//			if(j != i) {
//				// find duo
//				result = num[i] * num[j];
//				if(result > _max) _max = result;
//				
//			}
//		}
		result = num[i];
		// find next
		for(j=0;j<n;j++) {
			if(j != i) {
				result *= num[j];
				if(result > _max) _max = result;
				
			}
		}
	}
//	
//	// find all
//	result = 1;
//	for(k=0;k<n;k++) {
//		result *= num[k];
//		if(result > _max) _max = result;
//	}

//	printf("The maximum product is %d.", _max);
	printf("%d", _max);
}
