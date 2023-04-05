#include <stdio.h>
#include <math.h>

int _stop=0;
void recur(int k, int i, int j) {
	int current, previous;
	if(k == _stop) return;
	else if(k == 0) {
		printf("%d ", i);
		recur(k+1, i, j);
	} else if(k == 1) {
		printf("%d ", j);
		recur(k+1, i, j);
	} else {
		current = pow(k,2)*j-i+pow(3,k);
		previous = j;
		if (k != _stop-1) printf("%d ", current);
		else printf("%d", current);
		recur(k+1, previous, current);
	}
}

int main() {
	int i, j, k, l, n;
	scanf("%d %d %d", &n, &i, &j);
	_stop = n+1;
	recur(0,i,j);
	
	
}
