#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int count;
void hanoi(int n, char from, char to, char aux ) {
	if(n == 1) {
		printf("\n Move disk 1 from rod %c to rod %c",from ,aux);
		return;
	}
	hanoi(n-1, from, aux, to); // a to c using b
	printf("\n Move disk %d from rod %c to rod %c", n, from, aux);
	hanoi(n-1, to, aux, from); // c to a using b
}



int main() {
	char s[100];
	// input with whitespace
    scanf("%[^\n]",s);
//	int n;
//	scanf("%d", &n);
//	hanoi(n, 'a', 'c', 'b');
	char *p;
	p = s;
//	printf("%c %c", *p, s[0]);

// move p to end
	while(*p != '\0') p++;
	p--;
	printf("%c %c", *p, s[0]);
	
	return 0;
}
