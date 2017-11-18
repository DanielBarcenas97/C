//Llamada a librerías
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
 
//Declaramos los prototipos de funciones
void imprimir (struct stat estru);
 
//Función principal
main(int argc, char **argv[])
{
//Declaramos variables, estructuras
struct stat estru;
struct dirent *dt;
DIR *dire;
char *dir;
int bytes=0;
 
system("clear");
 
//Ingresamos por teclado el directorio
scanf("%s",&dir);
 
//dire=opendir(".");
//Para utilizar la función open dir, incluir la libreria dirent.h
//La función lo que hace es abrir un directorio
dire=opendir(&dir);
 
//Leer el directorio y recorrerlo
//La función readdir, lee el directorio completo
while((dt=readdir(dire)) != NULL){
 //Con la función stat podemos ver el estado de los ficheros
 //En este ejemplo, se muestra los permisos, nombre, y tamaño
 stat(dt->d_name, &estru);
 imprimir(estru);
 printf("%-20s %d \n",dt->d_name,estru.st_size);
 bytes=bytes+estru.st_size;
}
bytes=bytes/1024;
printf("\nTotal en KB: %d",bytes);
closedir(dire);
 
}
 
//Función que permite imprimir los permisos
void imprimir (struct stat estru){
 printf( (S_ISDIR(estru.st_mode)) ? "d" : "-" );
 printf( (estru.st_mode & S_IRUSR) ? "r" : "-" );
 printf( (estru.st_mode & S_IWUSR) ? "w" : "-" );
 printf( (estru.st_mode & S_IXUSR) ? "x" : "-" );
 printf( (estru.st_mode & S_IRGRP) ? "r" : "-" );
 printf( (estru.st_mode & S_IWGRP) ? "w" : "-" );
 printf( (estru.st_mode & S_IXGRP) ? "x" : "-" );
 printf( (estru.st_mode & S_IROTH) ? "r" : "-" );
 printf( (estru.st_mode & S_IWOTH) ? "w" : "-" );
 printf( (estru.st_mode & S_IXOTH) ? "x" : "-" );
 printf("%-3s");
}