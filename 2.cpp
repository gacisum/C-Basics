#include <stdio.h>
int main() {
	int a, b, c = 0;
	printf("Input three numbers separated by comma :\n");
	scanf("%d, %d, %d", &a, &b, &c);
	printf("The sum of three numbers : %d\n", a+b+c);
	printf("The multiplication of three numbers : %d\n", a*b*c);
	printf("The division of three numbers : %d\n", a/b/c);
	printf("The subtraction of three numbers : %d\n", a-b-c);
	
}
