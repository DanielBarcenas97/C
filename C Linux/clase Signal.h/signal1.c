#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <signal.h>

int32_t rdtsc(){
    __asm__ __volatile__("rdtsc");
}

//Funcion "manejadora"
void ctrlcHandler(int32_t noSignal){
	printf("No lo haga compa >:v!!\n");
	getchar();
}

void ctrlzHandler(int32_t noSignal){
	printf("Adios :'v\n");
	getchar();
	//exit(EXIT_SUCCESS);
}

int main(void){
	//Echamos a andar el "listener"
	signal(SIGINT, ctrlcHandler);
	signal(SIGSTOP, ctrlzHandler);

	while (1) {
		srand(rdtsc());
		printf("%c ", rand() % 128);
	}

	return EXIT_SUCCESS;
}