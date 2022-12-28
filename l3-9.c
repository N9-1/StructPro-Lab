#include <stdio.h>
int main()
{
	int x, y, ans, r;
	
	scanf("%d %d", &x, &y);
	r = y%x;
	ans = y/x;
	if (r != 0)
	{
		ans += 1;
	}
	
	printf("%d", ans);
	
	return 0;
}
