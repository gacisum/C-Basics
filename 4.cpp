#include <stdio.h>
int main() {
	int m = 300;
	float fx = 300.600006;
	char cht = 'z';
	int *m1;
	m1 = &m;
	float *fx1;
	fx1 = &fx;
	char *cht1;
	cht1 = &cht;
	
	printf("------------------------------\n");
	printf("address of m = %p\n", &m);
	printf("address of fx = %p\n", &fx);
	printf("address of cht = %p\n", &cht);
	printf("------------------------------\n");
	printf("value at address of m = %d\n", *(&m));
	printf("value at address of fx = %f\n", *(&fx));
	printf("value at address of cht = %c\n", *(&cht));
	printf("------------------------------\n");
	printf("address of m = %p\n", m1);
	printf("address of fx = %p\n", fx1);
	printf("address of cht = %p\n", cht1);
	printf("------------------------------\n");
	printf("value at address of m = %d\n", *m1);
	printf("value at address of m = %f\n", *fx1);
	printf("value at address of m = %c\n", *cht1);
	
	
	}
