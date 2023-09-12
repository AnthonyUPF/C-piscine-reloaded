# Nombre del ejecutable final
NAME = ft_display_file

# Compilador y opciones de compilación
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Regla por defecto para compilar el programa
all: $(NAME)

# Compilación del programa
$(NAME): ft_display_file.c
	$(CC) $(CFLAGS) ft_display_file.c -o $(NAME)

# Regla para limpiar los archivos generados durante la compilación
clean:
	rm -f $(NAME)

# Regla para limpiar archivos y el ejecutable
fclean: clean

# Regla para recompilar desde cero
re: fclean all

# Indica que las reglas clean, fclean y re no corresponden a archivos
.PHONY: all clean fclean re
