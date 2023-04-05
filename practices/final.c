#include <stdio.h>

int strlenz(char *s) {
	char *p = s;
//	p++;
	printf("%c", *p);
	while (*p != '\0') p++;
	printf("%x\n%x\n", p, s);
	return p-s;
}

int main() {
	char a[3] = {'0', '1', '2'};
//	int *p;
//	p = &a[0];
//	printf("%x %x", p, &a[0]);
	printf("%d %x", strlenz(a), &a);
}
