#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	scanf("%d/%d/%d/%d", &a, &b, &c, &d);
	
	int max_v = a;
	if (b > max_v)
	{
		max_v = b;
	}
	if (c > max_v)
	{
		max_v = c;
	}
	if (d > max_v)
	{
		max_v = d;
	}
	
	printf("%d", max_v);
	
	return 0;
}
