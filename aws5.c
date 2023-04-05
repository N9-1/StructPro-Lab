#include <stdio.h>

int main()
{
	int n, d = 3, t, i;
	scanf("%d", &n);
	
	for(i=0; i < d; i++)
	{
		if(n >= 100)
		{
			t = n / 100;
			n = n % 100;
		}
		else if(n >= 10)
		{
			t = n / 10;
			n = n % 10;
		}
		else
		{
			t = n;
		}

		
		if(t == 0)
		{
			printf("Zero ");
		}
		else if(t == 1)
		{
			printf("One ");
		}
		else if(t == 2)
		{
			printf("Two ");
		}
		else if(t == 3)
		{
			printf("Three ");
		}
		else if(t == 4)
		{
			printf("Four ");
		}
		else if(t == 5)
		{
			printf("Five ");
		}
		else if(t == 6)
		{
			printf("Six ");
		}
		else if(t == 7)
		{
			printf("Seven ");
		}
		else if(t == 8)
		{
			printf("Eight ");
		}
		else
		{
			printf("Nine ");
		}
	}
}
