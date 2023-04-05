#include <stdio.h>
#include <math.h>

int main() {
	int i,j,k,w;
	w = 4;
	int d, n, s_d=0, s_n=0;
	for(i=0;i<w;i++) {
		scanf("%d %d", &d, &n);
		s_d += d;
		s_n += n;
	}
	
	float min=99999;
	int select;
	//option
	float opt[3];
	opt[0] = 0.75*s_d + 1.25*s_n;
	opt[1] = 300;
	if(s_d+s_n > 500) opt[1] += ((s_d+s_n)-500)*1.5;
	opt[2] = 600;
	if(s_d+s_n > 1200) opt[2] += ((s_d+s_n)-1200)*1.25;
	 
	// find min
	for(i=0;i<3;i++){
//		printf("%f\n", opt[i]);
		if(opt[i] < min) {
			min = opt[i];
			select = i+1;
		}
	}
	
	printf("%d", select);
}
