#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

void bubble_sort(int *x) {
	int i, j;
	for(i=0; i<7 ; i++) {
		for(j=0; j<7 - i -1 ; j++) {
			if(x[j] > x[j+1]) {
				int t = x[j];
				x[j] = x[j+1];
				x[j+1] = t;
 			}
		}
	}
	
	for(i=0;i<7;i++) printf("%d ", x[i]);
	
	return;
}

int main() {
	int i;
	int s[] = {9,1,3,4,5,6,7};
	
	// input with whitespace
//    scanf("%[^\n]",s);
	bubble_sort(s);
	
	
	return 0;
}
