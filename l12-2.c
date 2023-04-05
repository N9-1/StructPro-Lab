#include <stdio.h>
#include <math.h>

int _stop=0;
int recur(int x, int y, int z, int i) {
	int t_x, t_y;
	if(i == _stop) return z;
	else if(i == 0) return recur(3, 1, 3*1, i+1);
	else { 
//		printf("%dx%d = %d; %d\n", x, y, x*y, i-1);
		t_x = x + y;
		t_y = x - y;
		return recur(t_x, t_y, z+=t_x*t_y,i+1);
	}
}

int main() {
	int j, k, l, n;
	scanf("%d", &n);
	_stop = n;
	printf("%d", recur(0,0,0,0));
}
