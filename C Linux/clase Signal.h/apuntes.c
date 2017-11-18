//Clase Signal.H Sabado 18 de Noviembre del 2017


/* signal.h

signal.h es un archivo de cabecera definido en la Biblioteca estándar de C 
para especificar como un programa maneja señales mientras se ejecuta. 
Una señal puede reportar un comportamiento excepcional en el programa 
(tales como la división por cero ), o una señal puede reportar algún 
evento asíncrono fuera del programa (como alguien está pulsando una 
tecla de atención interactiva en el teclado).


Las funciones son:

--> int raise(int sig) - Envía una señal.

--> psignal(int sig, const char *s) -  Devuelve a stderr una cadena que representa un número de señal.

--> void* signal(int sig, void (*func)(int)) - Establece las medidas adoptadas cuando el programa 
                                               recibe la señal.

Macros:

SIG_DFL – Selecciona el manejo de la señal.
SIG_IGN – Ignora una señal.
SIG_ERR – Un número que se usa para errores.

Constantes:

Constante  Significado              Sistemas
SIGHUP     Hangup                   POSIX
SIGINT     Interrupt                ANSI
SIGQUIT    Quit                     POSIX
SIGILL     Illegal instruction      ANSI
SIGABRT    Abort                    ANSI
SIGTRAP    Trace trap               POSIX
SIGIOT     IOT trap                 4.2 BSD
SIGEMT     EMT trap                 4.2 BSD
SIGINFO    Information              4.2 BSD
SIGFPE     Floating-point exception ANSI
SIGKILL    Kill, unblock-able       POSIX
SIGBUS     Bus error                4.2 BSD
SIGSEGV    Segmentation violation   ANSI  -> Acceso no válido al almacenamiento como violación de segmento.
SIGSYS     Bad argument to system call 4.2 BSD
SIGPIPE    Broken pipe              POSIX
SIGALRM    Alarm clock              POSIX
SIGTERM    Termination              ANSI
SIGUSR1    User-defined signal 1    POSIX
SIGUSR2    User-defined signal 2    POSIX
SIGCHLD    Child status has changed POSIX
SIGCLD     Same as SIGCHLD    System V
SIGPWR     Power failure restartSystem V
SIGXCPU    Exceeded CPU time        POSIX
SIGSTOP    Pause execution          POSIX
SIGCONT    Resume execution         POSIX                                            
*/