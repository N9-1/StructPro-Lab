#include<stdio.h>

int main() {
	char file_name[255]= {"input.txt"};
	int i, j, k;
	int i1[255], i2[255];
	char s1[100][100], s4[100];
	float f1[255];
	
	FILE *fp = fopen(file_name, "r");
	
	int _size = 0;
	int check_end_of_file = fscanf(fp, "%d %s %f %d", &i1[_size], &s1[_size], &f1[_size], &i2[_size]); _size++;
    while (check_end_of_file != EOF)
    {
        check_end_of_file = fscanf(fp, "%d %s %f %d", &i1[_size], &s1[_size], &f1[_size], &i2[_size]); _size++;
    }
    _size = _size - 1;
    
    fclose (fp);
    
//    for(i=0; i<_size; i++)
//    {
//    	printf("%d %s %.1f %d \n", i1[i], s1[i], f1[i], i2[i]);
//	}
	int t = 0;
	
	while(1)
	{
		scanf("%d", &t);
		
		for(i=0; i < _size; i++)
		{
			if(t == i1[i])
			{
				printf("%f\n", f1[i]);
				break;
			}
		}
		
		scanf("%s", s4);
		if(s4[0]=='y') break;
	}
}
