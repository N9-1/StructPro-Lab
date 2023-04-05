#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
	float z;
}vector3D;

void findlength(float x, float y, float z) {
	float l;
	l = sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	printf("%.2f\n", l);
}

int main() {
	int i,j,k,n;
	scanf("%d", &n);
	
	vector3D vector[n];
	
	for(i=0;i<n;i++) {
		scanf("%f %f %f", &vector[i].x, &vector[i].y, &vector[i].z);
//		printf("%f", vector[i].x);
		findlength(vector[i].x, vector[i].y, vector[i].z);
	}
}
