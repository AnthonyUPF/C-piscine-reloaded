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

```sh
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
