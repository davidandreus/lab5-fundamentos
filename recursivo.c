#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacci(int term); 

int main(int argc, char **argv){
	int terminos, contador;
	clock_t start;
	clock_t end;
	terminos = atoi(argv[1]);
	start = clock();
	for( contador = 0; contador < terminos; contador++){
		printf("%d ", fibonacci(contador));
	}
	end = clock();
	printf("\n");
	printf("%f \n", (end-start)/(double)CLOCKS_PER_SEC);
	return 0; // indica que el programa finalizó con éxito
} // fin main

int fibonacci(int term){
	if (term < 2)
		return term;
	return fibonacci(term - 1) + fibonacci(term - 2);
} // fin función fibonacci




