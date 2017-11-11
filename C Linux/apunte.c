/** 
 * Manejo de Directorios utilizando el estándar POSIX y la estructura DIRENT (dirent.h)
 
 * struct dirent {
    ino_t          d_ino;        inode number 
    off_t          d_off;        offset to the next dirent 
    unsigned short d_reclen;     length of this record 
    unsigned char  d_type;       type of file; not supported
                                   by all file system types 
    char           d_name[256];  filename 
	};
 	
 	Esta estructura es la que describe a los directorios en el estándar POSIX.
 	Para poder operar con directorios, hacemos uso de diversas llamadas al SO.
 				
 	int mkdir(const char *pathname, mode_t mode); 
 	- Nos permite crear directorios. El modo especifica los permisos de uso.
	DIR *opendir(const char *name);
	- Abre el flujo de directorio correspondiente al nombre del directorio especificado y nos regresa un puntero a este.
	El flujo se posiciona en la primera entrada del directorio.
	struct dirent *readdir(DIR *dirp);
	- Nos permite leer el flujo de directorio abierto previamente con la función opendir(const char *name).
	Esta función retorna un puntero a una estructura DIRENT que representa a la siguiente entrada en el flujo apuntado por dirp.
	Retorna NULL al llegar al final del flujo o al ocurrir un error.
	int rmdir(const char *pathname);
	- rmdir() remueve el directorio representado por el "pathname" si está vacío. SI no está vacio el directorio, 
	entonces la función falla.
	int closedir(DIR *dirp);
	- La función closedir() cierra el flujo a un directorio asociado con dirp.
	Una llamada exitosa a la función también cierra el descriptor de archivo asociado con dirp.
	char *getcwd(char *buf, size_t size);
	- Nos permite obtener el PATH absoluto del directorio apuntado por buf de tamaño size.
	La función nos devuelve una cadena que contiene el PATH absoluto del directorio en el que nos encontramos trabajando y también devuelve esta por medio
	del argumento buf. Si la longitud de la cadena excede size bytes, se retorna NULL.
  
 **/


Bibliotecas poco conocidas.

<stdint>
 Biblioteca estandar que contiene tipos definidos por el usuario de
 enteros con determinados tamaños.

 Contiene 5 tipos de enteros que son:
	
	* Enteros de tamaño fijo
		- int8_t, int16_t, int32_t, int64_t
		- uint8_t, uint16_t, uint32_t, uint64_t

	* Enteros de un tamaño minimo
		- int_least8_t int_least16_t int_least32_t int_least64_t 
		- uint_least8_t uint_least16_t uint_least32_t uint_least64_t

	* Enteros rápidos
		- int_fast8_t int_fast16_t int_fast32_t int_fast64_t 
		- uint_fast8_t uint_fast16_t uint_fast32_t uint_fast64_t

	* Enteros suficientes para contener apuntadores a objetos (void*)
		- intptr_t
		- uintptr_t

	* Enteros con el tamaño máximo
		- intmax_t
		- uintmax_t


La función stat(): Esta función tiene un comportamiento algo diferente a lo visto hasta ahora: 
                   utiliza una estructura de datos con todas las características posibles de un 
                   fichero, y cuando se llama a stat() se pasa una referencia a una estructura 
                   de este tipo. Al final de la syscall, tendremos en esa estructura todas las
                    características del fichero debidamente cumplimentadas. 

struct stat {
  dev_t         st_dev;      /* dispositivo */
  ino_t         st_ino;      /* numero de inode */
  mode_t        st_mode;     /* modo del fichero */
  nlink_t       st_nlink;    /* numero de hard links */
  uid_t         st_uid;      /* UID del propietario*/
  gid_t         st_gid;      /* GID del propietario */
  dev_t         st_rdev;     /* tipo del dispositivo */
  off_t         st_size;     /* tamaño total en bytes */
  blksize_t     st_blksize;  /* tamaño de bloque preferido */
  blkcnt_t      st_blocks;   /* numero de bloques asignados */
  time_t        st_atime;    /* ultima hora de acceso */
  time_t        st_mtime;    /* ultima hora de modificación */
  time_t        st_ctime; /* ultima hora de cambio en inodo */
};

<stdbool>
 Contiene macros para el uso de valores booleanos.

 	bool -> _Bool
 	true -> 0x1
 	false -> 0x0

 	Equivalencias interesantes:
 		sizeof(bool) == sizeof(uint8_t) == sizeof(char)

<noreturn>
 Facilita el uso de funciones del tipo _Noreturn.

 	noreturn -> _Noreturn

<stdarg>
 Facilita la creación de funciones con un número variable de 
 parametros.