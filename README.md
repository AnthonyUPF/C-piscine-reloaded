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


