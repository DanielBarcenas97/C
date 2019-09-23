Programa para hacer un cifrado cesar en brainfuck
>

***** Mensaje de salida *****
+++++ +++++   Valor 10 en la posición cero (multiplicador)

Ciclo que se encargara de inicializar los valores para los mensajes
[
    > +++          Suma tres a la posición 1
    > +++++        Suma cinco a la posición 2
    > +++++ ++     Suma siete a la posición 3
    > +++++ +++++  Suma 10 a la posición 4
    <<<< -         Regresa cuatro posiciones y resta uno al contador del bucle
]

> ++               Suma dos a la posición 1 una sola vez
> --               Resta dos a la posición 2 una sola vez
> -----            Resta 5 a la posición 3 una sola vez
> ---              Resta tres a la posición 4 una sola vez


<<<< +++++ +++++ Regresa a la posición cero y le suma 10
>>               Se mueve a la posición 2

El resultado es:
Pos 0 es 10        Servirá para imprimir saltos de línea
Pos 1 es 32        Servirá para imprimir espacios y signos de admiración
Pos 2 es 48        Servirá para imprimir números
Pos 3 es 65        Servirá para imprimir letras mayúsculas
Pos 4 es 97        Servirá para imprimir letras minúsculas

Imprimir el mensaje: "Welcome to the Brainfuck Caesar Cipher!!"
>   +++++ +++++ +++++ +++++ ++ . -- ----- ----- ----- -----   <    Imprime 'W'
>>                        ++++ . ----                        <<    Imprime 'e'
>>               +++++ +++++ + . - ----- -----               <<    Imprime 'l'
>>                          ++ . --                          <<    Imprime 'c'
>>            +++++ +++++ ++++ . ---- ----- -----            <<    Imprime 'o'
>>              +++++ +++++ ++ . -- ----- -----              <<    Imprime 'm'
>>                        ++++ . ----                        <<    Imprime 'e'
<                              .                              >    Imprime ' '
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
>>            +++++ +++++ ++++ . ---- ----- -----            <<    Imprime 'o'
<                              .                              >    Imprime ' '
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
>>                    +++++ ++ . -- -----                    <<    Imprime 'h'
>>                        ++++ . ----                        <<    Imprime 'e'
<                              .                              >    Imprime ' '
>                            + . -                            <    Imprime 'B'
>>        +++++ +++++ +++++ ++ . -- ----- ----- -----        <<    Imprime 'r'
>>                             .                             <<    Imprime 'a'
>>                   +++++ +++ . --- -----                   <<    Imprime 'i'
>>             ++++++ +++++ ++ . -- ----- ------             <<    Imprime 'n'
>>                       +++++ . -----                       <<    Imprime 'f'
>>     +++++ +++++ +++++ +++++ . ----- ----- ----- -----     <<    Imprime 'u'
>>                          ++ . --                          <<    Imprime 'c'
>>                 +++++ +++++ . ----- -----                 <<    Imprime 'k'
<                              .                              >    Imprime ' '
>                           ++ . --                           <    Imprime 'C'
>>                             .                             <<    Imprime 'a'
>>                        ++++ . ----                        <<    Imprime 'e'
>>       +++++ +++++ +++++ +++ . --- ----- ----- -----       <<    Imprime 's'
>>                             .                             <<    Imprime 'a'
>>        +++++ +++++ +++++ ++ . -- ----- ----- -----        <<    Imprime 'r'
<                              .                              >    Imprime ' '
>                           ++ . --                           <    Imprime 'C'
>>                   +++++ +++ . --- -----                   <<    Imprime 'i'
>>             +++++ +++++ +++++ . ----- ----- -----         <<    Imprime 'p'
>>                    +++++ ++ . -- -----                    <<    Imprime 'h'
>>                        ++++ . ----                        <<    Imprime 'e'
>>        +++++ +++++ +++++ ++ . -- ----- ----- -----        <<    Imprime 'r'
<                            + . -                            >    Imprime '!'
<                            + . -                            >    Imprime '!'
<<                             .                             >>    Imprime salto de línea

Ahora imprimir el prompt: "Enter a line of text to encode it: "
>                         ++++ . ----                         <    Imprime 'E'
>>             ++++++ +++++ ++ . -- ----- ------             <<    Imprime 'n'
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
>>                        ++++ . ----                        <<    Imprime 'e'
>>        +++++ +++++ +++++ ++ . -- ----- ----- -----        <<    Imprime 'r'
<                              .                              >    Imprime ' '
>>                             .                             <<    Imprime 'a'
<                              .                              >    Imprime ' '
>>               +++++ +++++ + . - ----- -----               <<    Imprime 'l'
>>                   +++++ +++ . --- -----                   <<    Imprime 'i'
>>             ++++++ +++++ ++ . -- ----- ------             <<    Imprime 'n'
>>                        ++++ . ----                        <<    Imprime 'e'
<                              .                              >    Imprime ' '
>>            +++++ +++++ ++++ . ---- ----- -----            <<    Imprime 'o'
>>                       +++++ . -----                       <<    Imprime 'f'
<                              .                              >    Imprime ' '
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
>>                        ++++ . ----                        <<    Imprime 'e'
>> +++++ +++++ +++++ +++++ +++ . --- ----- ----- ----- ----- <<    Imprime 'x'
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
<                              .                              >    Imprime ' '
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
>>            +++++ +++++ ++++ . ---- ----- -----            <<    Imprime 'o'
<                              .                              >    Imprime ' '
>>                        ++++ . ----                        <<    Imprime 'e'
>>             ++++++ +++++ ++ . -- ----- ------             <<    Imprime 'n'
>>                          ++ . --                          <<    Imprime 'c'
>>            +++++ +++++ ++++ . ---- ----- -----            <<    Imprime 'o'
>>                         +++ . ---                         <<    Imprime 'd'
>>                        ++++ . ----                        <<    Imprime 'e'
<                              .                              >    Imprime ' '
>>                   +++++ +++ . --- -----                   <<    Imprime 'i'
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
                   +++++ +++++ . ----- -----                       Imprime ':'
<                              .                              >    Imprime ' '

>>>           Sale de la sección de impresión a pantalla

***** Leyendo la entrada *****
>             Se resguarda una celda para ser una bandera

,             Se lee el primer carácter
[>,]          Se leen el resto de caracteres en bucle

***** Haciendo el cifrado *****

<             Regresamos al final de la palabra
[+++<]        Hacemos el desplazamiento de 3 caracteres

***** Imprimiendo la cadena *****

Imprimier mensaje: "\nThe result is: "
<<<          Entramos al terreno de impresión
<<                             .                             >>    Imprime salto de línea
>       +++++ +++++ +++++ ++++ . ---- ----- ----- -----       <    Imprime 'T'
>>                    +++++ ++ . -- -----                    <<    Imprime 'h'
>>                        ++++ . ----                        <<    Imprime 'e'
<                              .                              >    Imprime ' '
>>        +++++ +++++ +++++ ++ . -- ----- ----- -----        <<    Imprime 'r'
>>                        ++++ . ----                        <<    Imprime 'e'
>>       +++++ +++++ +++++ +++ . --- ----- ----- -----       <<    Imprime 's'
>>     +++++ +++++ +++++ +++++ . ----- ----- ----- -----     <<    Imprime 'u'
>>               +++++ +++++ + . - ----- -----               <<    Imprime 'l'
>>      +++++ +++++ +++++ ++++ . ---- ----- ----- -----      <<    Imprime 't'
<                              .                              >    Imprime ' '
>>                   +++++ +++ . --- -----                   <<    Imprime 'i'
>>       +++++ +++++ +++++ +++ . --- ----- ----- -----       <<    Imprime 's'
                   +++++ +++++ . ----- -----                       Imprime ':'
<                              .                              >    Imprime ' '

>>>>          Entramos al espacio de la cadena

[.>]          Imprimimos la cadena cifrada
