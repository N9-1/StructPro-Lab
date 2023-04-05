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
	

}
