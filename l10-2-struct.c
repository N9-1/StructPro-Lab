#include<stdio.h>

typedef struct
{
	int i1, i2;
	char s1[100];
	float f1;
} items;

int main() {
	char file_name[255]= {"input.txt"};
	int i, j, k, _size = 0; char s4[100]; items ii[100];
	
	FILE *fp = fopen(file_name, "r");
	
	int ;
	int check_end_of_file = fscanf(fp, "%d %s %f %d", &ii[_size].i1, &ii[_size].s1, &ii[_size].f1, &ii[_size].i2); _size++;
    while (check_end_of_file != EOF)
    {
        check_end_of_file = fscanf(fp, "%d %s %f %d", &ii[_size].i1, &ii[_size].s1, &ii[_size].f1, &ii[_size].i2); _size++;
    }
    _size = _size - 1;
    
    fclose (fp);
    
//    for(i=0; i<_size; i++)
//    {
//    	printf("%d %s %.1f %d \n", i1[i], s1[i], f1[i], i2[i]);
//	}

	
	while(1)
	{
		int t = 0;
		scanf("%d", &t);
		
		for(i=0; i < _size; i++)
		{
			if(t == ii[i].i1)
			{
				printf("%f\n", ii[i].f1);
				break;
			}
		}
		
		scanf("%s", s4);
		if(s4[0]=='y') break;
	}
}
