# Piscine Reloaded

El Piscine Reloaded es una recopilación de ejercicios diseñados para reforzar tu comprensión del lenguaje de programación C. Sirve como un repaso de los conceptos básicos cubiertos durante la Piscine C.

Si has completado previamente alguno de estos ejercicios durante la Piscine C, te recomendamos encarecidamente que no utilices tu código antiguo. Aprender a programar implica práctica, y reutilizar código existente ofrece poco beneficio.

## Reglas Generales

- Asegúrate de tener los permisos adecuados en tus archivos y directorios.
- Sigue los procedimientos de entrega para cada ejercicio.
- Tu trabajo será evaluado únicamente por un programa llamado Moulinette.
- Moulinette es meticulosa y estricta. No hay margen para negociaciones. Para evitar sorpresas, sé lo más preciso posible.
- Los ejercicios de Shell deben ser ejecutables con /bin/sh.
- No dejes ningún archivo adicional en tu directorio que no esté especificado en el ejercicio.
- Examina los ejemplos; pueden requerir detalles no mencionados explícitamente.
- Moulinette no es muy tolerante. No intentará entender tu código si no cumple con la Norma. Moulinette se basa en un programa llamado `norminette` para verificar si tus archivos cumplen con la norma. En resumen: enviar código que no pase la verificación de `norminette` es insensato.
- Usar una función prohibida se considera trampa, lo que resulta en una calificación de -42, no negociable.
- Solo envía una función `main()` si se solicita explícitamente para un programa.
- Moulinette compila con las siguientes banderas: -Wall -Wextra -Werror, y usa CC.
- Si `ft_putchar()` es una función autorizada, compilaremos tu código con nuestro `ft_putchar.c`.
- Si tu programa no compila, recibirás una calificación de 0.

## Ejercicio 00 : Oh yeah, mooore...

**Directorio de entrega** : `ex00/`

**Archivos para entregar** : `exo.tar`

**Funciones permitidas** : Ninguna

1. Crea los siguientes archivos y directorios para asegurarte de que el comando `ls -l` en tu directorio muestre la salida como se muestra:

```
$> ls -l
total 42
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxr-xr-x 1 XX XX 5 Jun 1 22:20 test6 -> test0
$>
```

2. Si la fecha del ejercicio (1 Jun) tiene seis meses o más de antigüedad, mostrar el año es aceptable.

3. Una vez completado, ejecuta `tar -cf exo.tar *` para crear el archivo que se enviará.


## Ejercicio 01 : Z

**Directorio de entrega** : `ex01/`

**Archivos para entregar** : `z`

**Funciones permitidas** : Ninguna

1. Crea un archivo llamado `z` que devuelva "Z", seguido de un salto de línea, cada vez que se use el comando `cat` en él.

```
?>cat z
Z
?>
```

## Ejercicio 02 : clean

**Directorio de entrega** : `ex02/`

**Archivos para entregar** : `clean`

**Funciones permitidas** : Ninguna

1. En un archivo llamado `clean`, coloca la línea de comando que buscará todos los archivos, tanto en el directorio actual como en sus subdirectorios, con un nombre que termine con `~`, o con un nombre que comience y termine con `#`.

2. La línea de comando mostrará y eliminará todos los archivos encontrados. Solo se permite un comando: sin `;` o `&&` u otras triquiñuelas.


## Ejercicio 03 : find_sh

**Directorio de entrega** : `ex03/`

**Archivos para entregar** : `find_sh.sh`

**Funciones permitidas** : Ninguna

1. Escribe una línea de comando que busque todos los nombres de archivo que terminen con ".sh" (sin comillas) en el directorio actual y todos sus subdirectorios. Debería mostrar solo los nombres de archivo sin el `.sh`.

   - Ejemplo de salida:

   ```
   $>./find_sh.sh | cat -e
   find_sh$
   file1$
   file2$
   file3$
   $>
   ```

## Ejercicio 04 : MAC

**Directorio de entrega** : `ex04/`

**Archivos para entregar** : `MAC.sh`

**Funciones permitidas** : Ninguna

1. Escribe una línea de comando que muestre las direcciones MAC de tu máquina. Cada dirección debe ir seguida de un salto de línea.

## Ejercicio 05 : ¿Puedes crearlo?


**Directorio de entrega** : `ex05/`

**Archivos para entregar** : `"\?$*'MaRViN'*$?\""`

**Funciones permitidas** : Ninguna

1. Crea un archivo que contenga solo "42", y NADA más.
   - Su nombre será: `"\?$*'MaRViN'*$?\"`
   - Ejemplo:
     ```
     $>ls -lRa *MaRV* | cat -e
     -rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\?$*'MaRViN'*$?\"$
     $>
     ```

## Ejercicio 06 : ft_print_alphabet

**Directorio de entrega** : `ex06/`

**Archivos para entregar** : `ft_print_alphabet.c`

**Funciones permitidas** : `ft_putchar`

1. Crea una función que muestre el alfabeto en minúsculas, en una sola línea, en orden ascendente, empezando por la letra 'a'.
   - Así es como debería estar prototipada:
     ```c
     void ft_print_alphabet(void);
     ```

## Ejercicio 07 : ft_print_numbers

**Directorio de entrega** : `ex07/`

**Archivos para entregar** : `ft_print_numbers.c`

**Funciones permitidas** : `ft_putchar`

1. Crea una función que muestre todos los dígitos, en una sola línea, en orden ascendente.
   - Así es como debería estar prototipada:
     ```c
     void ft_print_numbers(void);
     ```

## Ejercicio 08 : ft_is_negative

**Directorio de entrega** : `ex08/`

**Archivos para entregar** : `ft_is_negative.c`

**Funciones permitidas** : `ft_putchar`

1. Crea una función que muestre 'N' o 'P' dependiendo del signo del entero ingresado como parámetro. Si 'n' es negativo, muestra 'N'. Si 'n' es positivo o nulo, muestra 'P'.
   - Así es como debería estar prototipada:
     ```c
     void ft_is_negative(int n);
     ```

## Ejercicio 09 : ft_ft

**Directorio de entrega** : `ex09/`

**Archivos para entregar** : `ft_ft.c`

**Funciones permitidas** : Ninguna

1. Crea una función que tome un puntero a int como parámetro y establezca el valor "42" en ese int.
   - Así es como debería estar prototipada:
     ```c
     void ft_ft(int *nbr);
     ```

## Ejercicio 10 : ft_swap

**Directorio de entrega** : `ex10/`

**Archivos para entregar** : `ft_swap.c`

**Funciones permitidas** : Ninguna

1. Crea una función que intercambie el valor de dos enteros cuyas direcciones se ingresan como parámetros.
   - Así es como debería estar prototipada:
     ```c
     void ft_swap(int *a, int *b);
     ```

## Ejercicio 11 : ft_div_mod

**Directorio de entrega** : `ex11/`

**Archivos para entregar** : `ft_div_mod.c`

**Funciones permitidas** : Ninguna

1. Crea una función `ft_div_mod` con el siguiente prototipo:
   ```c
   void ft_div_mod(int a, int b, int *div, int *mod);
   ```

- Esta función divide los parámetros a por b y almacena el resultado en el entero apuntado por div. También almacena el resto de la división de a por b en el entero apuntado por mod.

## Ejercicio 12 : ft_iterative_factorial

**Directorio de entrega** : `ex12/`

**Archivos para entregar** : `ft_iterative_factorial.c`

**Funciones permitidas** : Ninguna

1. Crea una función iterativa que devuelva un número. Este número es el resultado de una operación factorial basada en el número proporcionado como parámetro.
   - Si hay un error, la función debe devolver 0.
   - Así es como debería estar prototipada:
     ```c
     int ft_iterative_factorial(int nb);
     ```
   - Tu función debe devolver su resultado en menos de dos segundos.

## Ejercicio 13 : ft_recursive_factorial

**Directorio de entrega** : `ex13/`

**Archivos para entregar** : `ft_recursive_factorial.c`

**Funciones permitidas** : Ninguna

1. Crea una función recursiva que devuelva el factorial del número proporcionado como parámetro.
   - Si hay un error, la función debe devolver 0.
   - Así es como debería estar prototipada:
     ```c
     int ft_recursive_factorial(int nb);
     ```

## Ejercicio 14 : ft_sqrt

**Directorio de entrega** : `ex14/`

**Archivos para entregar** : `ft_sqrt.c`

**Funciones permitidas** : Ninguna

1. Crea una función que devuelva la raíz cuadrada de un número (si existe), o 0 si la raíz cuadrada es un número irracional.
   - Así es como debería estar prototipada:
     ```c
     int ft_sqrt(int nb);
     ```
   -Tu función debe devolver su resultado en menos de dos segundos.

## Ejercicio 15 : ft_putstr

**Directorio de entrega** : `ex15/`

**Archivos para entregar** : `ft_putstr.c`

**Funciones permitidas** : `ft_putchar`

1. Crea una función que muestre una cadena de caracteres en la salida estándar.
   - Así es como debería estar prototipada:
     ```c
     void ft_putstr(char *str);
     ```

## Ejercicio 16 : ft_strlen

**Directorio de entrega** : `ex16/`

**Archivos para entregar** : `ft_strlen.c`

**Funciones permitidas** : Ninguna

1. Reproduce el comportamiento de la función `strlen` (man `strlen`).
   - Así es como debería estar prototipada:
     ```c
     int ft_strlen(char *str);
     ```

## Ejercicio 17 : ft_strcmp

**Directorio de entrega** : `ex17/`

**Archivos para entregar** : `ft_strcmp.c`

**Funciones permitidas** : Ninguna

1. Reproduce el comportamiento de la función `strcmp` (man `strcmp`).
   - Así es como debería estar prototipada:
     ```c
     int ft_strcmp(char *s1, char *s2);
     ```

## Ejercicio 18 : ft_print_params

**Directorio de entrega** : `ex18/`

**Archivos para entregar** : `ft_print_params.c`

**Funciones permitidas** : `ft_putchar`

1. Estamos tratando con un programa aquí, por lo tanto, deberías tener una función `main` en tu archivo `.c`.
2. Crea un programa que muestre sus argumentos dados.
   - Ejemplo:
     ```
     $>./a.out test1 test2 test3
     test1
     test2
     test3
     $>
     ```

## Ejercicio 19 : ft_sort_params

**Directorio de entrega** : `ex19/`

**Archivos para entregar** : `ft_sort_params.c`

**Funciones permitidas** : `ft_putchar`

1. Estamos tratando con un programa aquí, por lo tanto, deberías tener una función `main` en tu archivo `.c`.
2. Crea un programa que muestre sus argumentos dados ordenados por orden ascii.
   - Debería mostrar todos los argumentos, excepto `argv[0]`.
   - Todos los argumentos deben tener su propia línea.

## Ejercicio 20 : ft_strdup

**Directorio de entrega** : `ex20/`

**Archivos para entregar** : `ft_strdup.c`

**Funciones permitidas** : `malloc`

1. Reproduce el comportamiento de la función `strdup` (man `strdup`).
   - Así es como debería estar prototipada:
     ```c
     char *ft_strdup(char *src);
     ```

## Ejercicio 21 : ft_range

**Directorio de entrega** : `ex21/`

**Archivos para entregar** : `ft_range.c`

**Funciones permitidas** : `malloc`

1. Crea una función `ft_range` que devuelva un array de enteros. Este array de enteros debe contener todos los valores entre `min` y `max`.
   - `min` incluido, `max` excluido.
   - Así es como debería estar prototipada:
     ```c
     int *ft_range(int min, int max);
     ```
   -Si el valor de `min` es mayor o igual que el valor de `max`, se debe devolver un puntero nulo.

## Ejercicio 22 : ft_abs.h

**Directorio de entrega** : `ex22/`

**Archivos para entregar** : `ft_abs.h`

**Funciones permitidas** : Ninguna

1. Crea una macro `ABS` que reemplace su argumento por su valor absoluto:
   ```c
   #define ABS(Value)
   ```
   - Se te pide hacer algo que normalmente está prohibido por la Norma, pero esta será la única vez que lo autorizaremos.

## Ejercicio 23 : ft_point.h

**Directorio de entrega** : `ex23/`

**Archivos para entregar** : `ft_point.h`

**Funciones permitidas** : Ninguna

1. Crea un archivo `ft_point.h` que permita compilar el siguiente programa principal:

```c
#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    return (0);
}
```

## Ejercicio 24 : Makefile

**Directorio de entrega** : `ex24/`

**Archivos para entregar** : `Makefile`

**Funciones permitidas** : Ninguna

1. Crea el Makefile que compilará tu librería `libft.a`.
2. El Makefile obtendrá sus archivos fuente del directorio "srcs".
3. El Makefile obtendrá sus archivos de cabecera del directorio "includes".
4. La librería se ubicará en la raíz del ejercicio.
5. El Makefile también deberá implementar las siguientes reglas: `clean`, `fclean` y `re`, así como `all`.
   - `fclean` hace lo equivalente a un `make clean` y también borra el binario creado durante el `make`.
   - `re` hace lo equivalente a un `make fclean` seguido de un `make`.
6. Solo obtendremos tu Makefile y lo probaremos con nuestros archivos. Para este ejercicio, solo las siguientes 5 funciones obligatorias de tu librería deben ser manejadas: (ft_putchar, ft_putstr, ft_strcmp, ft_strlen y ft_swap).

## Ejercicio 25 : ft_foreach

**Directorio de entrega** : `ex25/`

**Archivos para entregar** : `ft_foreach.c`

**Funciones permitidas** : Ninguna

1. Crea la función `ft_foreach` que, para un arreglo de enteros dado, aplica una función a todos los elementos del arreglo. Esta función se aplicará siguiendo el orden del arreglo.
   - Así es como debería estar prototipada:
     ```c
     void ft_foreach(int *tab, int length, void(*f)(int));
     ```
2. Por ejemplo, la función `ft_foreach` podría ser llamada de la siguiente manera para mostrar todos los enteros del arreglo:
   ```c
   ft_foreach(tab, 1337, &ft_putnbr);
   ```

## Ejercicio 26 : ft_count_if

**Directorio de entrega** : `ex26/`

**Archivos para entregar** : `ft_count_if.c`

**Funciones permitidas** : Ninguna

1. Crea una función `ft_count_if` que devuelva el número de elementos del arreglo que devuelvan 1 al ser pasados a la función `f`.
   - Así es como debería estar prototipada:
     ```c
     int ft_count_if(char **tab, int(*f)(char*));
     ```
2. El arreglo estará delimitado por 0.

## Ejercicio 27 : display_file

**Directorio de entrega** : `ex27/`

**Archivos para entregar** : `Makefile` y archivos necesarios para tu programa

**Funciones permitidas** : `close`, `open`, `read`, `write`

1. Crea un programa llamado `ft_display_file` que muestre, en la salida estándar, solo el contenido del archivo proporcionado como argumento.
2. El directorio de entrega debe tener un Makefile con las siguientes reglas: `all`, `clean`, `fclean`. El binario se llamará `ft_display_file`.
3. La función `malloc` está prohibida. Solo puedes hacer este ejercicio declarando un arreglo de tamaño fijo.
4. Todos los archivos dados como argumentos serán válidos.
5. Los mensajes de error deben mostrarse en su salida reservada seguidos de una nueva línea.
   - Si no se proporciona ningún argumento, debería mostrar:
     ```
     File name missing.
     ```
   - Si hay más de un argumento, debería mostrar:
     ```
     Too many arguments.
     ```
   - Si no se puede leer el archivo, debería mostrar:
     ```
     Cannot read file.
     ```


