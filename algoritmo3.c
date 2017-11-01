#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
Helper function that multiplies 2 matrices F and M of size 2*2, and puts the multiplication result back to F[][]
*/

void multiply(int F[2][2], int M[2][2]);


/*
Helper funciton that calculates f[][] raise to the power n and puts the result in F[][] raise to the power n and puts the result in F[][]
Note that this function is designed only for fib() adnd won't work as general power function
*/

void power(int F[2][2], int n);

int fib(int n){
	int F[2][2] = {{1,1}, {1,0}};
	if (n == 0)
		return 0;
	power(F, n-1);

	return F[0][0];
}

void multiply(int F[2][2], int M[2][2]){
	int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
	int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
	int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
	int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][0] = z;
	F[1][1] = w;
}

void power(int F[2][2], int n){
	int i;
	int M[2][2] = {{1,1}, {1,0}};

	// n - 1 times, multiply the matriz to {{1,0},{0,1}}
	for (i = 2; i <=n; i++)
		multiply(F, M);
}




int main(int argc, char **argv){
	int n;
	clock_t start; // crea la variable iniciar para el cálculo del tiempo
	clock_t end; // crea la variable finalizar para el cálculo del tiempo
	n = atoi(argv[1]); // convierte el argumento a tipo entero
	start = clock(); // inicia el conteo del tiempo
	printf("%d", fib(n));
	end = clock(); // termina el conteo del tiempo
	printf("Tiempo de Ejecución\n");
	printf("%f \n", (end-start)/(double)CLOCKS_PER_SEC); // realiza el cálculo del tiempo
	return 0;
}

