#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>
 
#define MAX_HIJOS 3
#define INTERVALO 5
 
 
void temp(int sig);
void misAcciones(int sig);
 
int hijo[MAX_HIJOS];
 
 
int main (void){
  int ppid = 0;
  int contador = 0;
  int pidActual;
 
 
  ppid = getpid();  
  printf("Padre -> %i\n", ppid);
  for(contador = 0; contador < MAX_HIJOS ; contador++){
    pidActual = fork();
 
    if(pidActual < 0) return -1;
 
 
    if(pidActual == 0){
      switch(contador){
      case 0:
    signal(30, misAcciones);
    printf("HIJO[0] -> %i\n", getpid());
    while(1) pause();
    break;
      case 1:
    signal(10, misAcciones);
    printf("HIJO[2] -> %i\n", getpid());
    while(1) pause();
    break;
      case 2:
    signal(16, misAcciones);
    printf("HIJO[3] -> %i\n", getpid());
    while(1) pause();
    break;
      }
    }
 
    hijo[contador] = pidActual;
  }
 
 
  if(signal(SIGALRM, temp) == SIG_ERR)
    printf("No fue posible cambiar acción a SIGALRM\n");
 
 
  alarm(INTERVALO);
  while(1) pause();
}
 
 
void temp(int sig){
  printf("Temp: Me llamo %i\n", getpid());
  kill(hijo[0], 30);
  kill(hijo[1], 10);
  kill(hijo[2], 16);
  alarm(INTERVALO);
}
 
void misAcciones(int sig){
  int i, j;
  switch(sig){
  case 30:
    for(i = 0; i < 300000; i++);
    printf("Me llamo %i, con la senial %i\n", getpid(), sig);
    break;
  case 10:
    printf("Me llamo %i, con la senial %i\n", getpid(), sig);
    break;
  case 16:
    for(i = 0; i < 100000; i++)
      for(j = 0; j < 100000; j++);
    printf("Me llamo %i, con la senial %i\n", getpid(), sig);
    break;
  }
}