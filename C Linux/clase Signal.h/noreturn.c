#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> 
#include <signal.h>

_Noreturn void except();
void violacion(int sig);

int main(void){
	int32_t *apuntador = NULL;
	
	signal(SIGSEGV, violacion);
	printf("%d\n",*apuntador);

	return 0x1;
}

_Noreturn void except(){
	printf("Me voy a morir :'v\n");
	exit(0);
}

void violacion(int sig){
	except();
}