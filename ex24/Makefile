# Nombre del archivo de salida (librería)
NAME = libft.a

# Directorios de los archivos fuente y de inclusión
SRCS_DIR = srcs
INCLUDES_DIR = includes

# Lista de archivos fuente
SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strcmp.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_swap.c

# Objetos generados a partir de los archivos fuente
OBJS = $(SRCS:.c=.o)

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Reglas
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(SRCS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

