#include <stdio.h>
#include <math.h>

int main() {
	int i,j,k,n;
	float points[99][3];
	
	scanf("%d", &n);
	
	float result[9999];
	
	for(i=0;i<n;i++) {
		scanf("%f %f %f", &points[i][0], &points[i][1], &points[i][2]);
	}
	
	float max[] = {-9999, -9999, -9999}; 
	int count = 0;
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			result[count] = sqrt(pow((points[j][0]-points[i][0]),2.0)+pow((points[j][1]-points[i][1]),2.0)+pow((points[j][2]-points[i][2]),2.0));
//			printf("%.2f ",result[count]);
			count++;
		}
	}
	
	// sorted
	float t;
	for(i=0;i<count - 1;i++) {
		for(j=0;j<count - i - 1;j++) {
			if(result[j] < result[j + 1]) {
				t = result[j];
				result[j] = result[j+1];
				result[j+1] = t;
			} 
		}
	}
	
	int count_m = 3;
	k = 0;
	while(count_m > 0) {
		if(result[k] != result[k+1]) {
			if(count_m != 1) printf("%.2f\n", result[k]);
			else printf("%.2f", result[k]);
			count_m -= 1;
		}
		k++;
	}
}
