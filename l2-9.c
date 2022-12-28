#include <stdio.h>

int main()
{
	int a, b, m, n, ans, l_table, sm_table, l_table_m, sm_table_m;
	scanf("%d %d\n%d %d", &a, &b, &m, &n); 
	
	if (((a == 0)&&(m != 0))||((b == 0)&&(n != 0)))
	{
		printf("Unable to finish order");
	}
	else
	{
		if (a != 0)
		{
			l_table_m = m%(a*6);
			l_table = m/(a*6);
		}
		else
		{
			l_table_m = 0;
			l_table = 0;
		}
		
		if (b != 0)
		{
			sm_table_m = n%(b*10);
			sm_table = n/(b*10);
		}
		else
		{
			sm_table_m = 0;
			sm_table = 0;
		}
		
		
		if (l_table_m != 0)
		{
			l_table += 1;
		}
		if (sm_table_m != 0)
		{
			sm_table += 1;
		}
		
		int max_d = l_table;
		
		if (sm_table > max_d)
		{
			max_d = sm_table;
		}
		
		printf("%d", max_d);
	}
	
	return 0;
}
