#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacci(int n);

int main(int argc, char **argv){
	int i, n, j;
	clock_t start;
	clock_t end;
	n = atoi(argv[1]);
	printf("La serie de fibonacci: \n");
	start = clock();
	fibonacci(n);
	end = clock();
	printf("\n");
	printf("%f \n", (end-start)/(double)CLOCKS_PER_SEC);
	return 0;
}

int fibonacci(int n){
	int i;
	int a = 0, b = 1, c;
	for ( i = 0; i < n; i++){
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
