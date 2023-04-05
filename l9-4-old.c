#include <stdio.h>
#include <math.h>
#include<stdlib.h>

typedef struct {
	char faces[10];
	char suits[4];
}deck_st;


int main() {
	int i=0,j=0,k=0,n;
	scanf("%d", &n);
	
	char faces[] = {'A', '2', '3', '4', '5', '6', '7', 'J', 'Q', 'K'};
	char suits[] = {'S', 'H', 'D', 'C'};
	
	char mydeck[999][999];
	int arr[999];
	
	for(i=0;i<n;i++) {
		scanf("\n%c %c", &mydeck[i][0], &mydeck[i][1]);
		for(j=0;j<10;j++) {
			if(mydeck[i][0] == faces[j]) arr[i] = j;
		}
	}
	
	int _temp;
	char temp_c[999][999];
	
	// sorted
	for(i=0;i<n - 1;i++) {
		for(j=0;j<n - i - 1;j++) {
			if(arr[j] > arr[j + 1]) {
				for(k=0;k<2;k++) {
					temp_c[0][k] =  mydeck[j][k];
					mydeck[j][k] = mydeck[j+1][k];
					mydeck[j+1][k] = temp_c[0][k];
				}
				_temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = _temp;
				
			}
		}
	}
	
	int _sum=0;
	
	for(i=0;i<n;i++) {
		_sum += arr[i] + 1;
		if(i != n-1) printf("%c-%c, ", mydeck[i][0], mydeck[i][1]);
		else printf("%c-%c\n%d", mydeck[i][0], mydeck[i][1], _sum);
	}
}
