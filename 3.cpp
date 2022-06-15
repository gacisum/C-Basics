#include <stdio.h>
int main() {
	int i = 0;
	printf("Read and print elements of an array:\n");
	printf("------------------------------------\n");
	int a[10]; 
	for(i=0; i<10; i++) {
		printf("element - %d: ", i);
		scanf("%d", &a[i]);	
		
	}
	printf("Even elements in array are: ");
	for(i=0; i<10; i++) {
		if(i % 2 != 1) printf("%d  ", a[i]);
	}
	printf("\n");
	printf("Odd elements in array are: ");
	for(i=0; i<10; i++) {
		if(i % 2) printf("%d  ", a[i]);
	}
	return 0;
}
