#include<stdio.h>

int main() {
	printf("Welcome to CS-KMUTNB MUSIC Shop\n");
	char file_name[255];
	char file_d[6][255];
	int price,i=0;
	scanf("%s", &file_name);
	FILE *fp;
	fp = fopen (file_name, "w");
	
	while(1)
	{
		price = 0;
		for(i=0; i<6;i++){
			printf("str [%d]: ", i);
			scanf("%s", &file_d[i]);
			if(i == 4) fprintf(fp, "%s\n\n", file_d[i]);
			else if(i != 5) fprintf(fp, "%s\n", file_d[i]);
		}
		if(file_d[5][0] == 'n') {
			fclose(fp);
			break;
		}
	}
}
