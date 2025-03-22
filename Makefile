CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =  push_swap.c sel_sort.c swap.c push.c rotate.c reverse_rotate.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

# Ruta de la librería
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Incluir los archivos de cabecera de libft
INC = -I$(LIBFT_DIR)

# Crear el ejecutable
$(NAME): $(OBJ) $(LIBFT)
	@echo "Building $(NAME)..."
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LIBFT)
	@echo "🎉 Build SUCCESS! $(NAME) created!"; \
	echo "  ____                              _     ____  "; \
        echo " / ___| _   _  ___ ___ ___  ___ ___| |  _|  _ \ "; \
        echo " \___ \| | | |/ __/ __/ _ \/ __/ __| | (_) | | |"; \
        echo "  ___) | |_| | (_| (_|  __/\__ \__ \_|  _| |_| |"; \
        echo " |____/ \__,_|\___\___\___||___/___(_) (_)____/ "; \

# Compilar archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Limpiar los archivos objeto
clean:
	rm -f $(OBJ)
	$(MAKE) clean -C $(LIBFT_DIR)  # Llamar al 'clean' del Makefile de libft

# Eliminar los archivos objeto y el ejecutable
fclean: clean
	rm -f $(NAME) ./a.out
	$(MAKE) fclean -C $(LIBFT_DIR)  # Llamar al 'fclean' del Makefile de libft

# Regenerar todo (limpiar y compilar de nuevo)
re: fclean $(NAME)

# Ejecutar el programa
run: $(NAME)
	./$(NAME) $(ARGS)

# Test, solo un ejemplo 
test: $(NAME)
	./$(NAME) 3 2 1

# Llamar al Makefile principal de libft para compilar la librería
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)  # Esto ejecuta 'make' en la carpeta libft

.PHONY: all clean fclean re run test

