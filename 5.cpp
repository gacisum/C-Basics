#include <stdio.h>

void function(int *n1, int *n2) {
	int a = 0;
	a = *n1;
	*n1 = *n2;
	*n2 = a;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	printf("Input first number : ");
	scanf("%d", &n1);
	printf("Input second number : ");
	scanf("%d", &n2);
	printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
	function(&n1, &n2);
	printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}


