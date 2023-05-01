#printf(“\033[0;31m”); //Set the text to the color red
#https://stackoverflow.com/questions/5947742/how-to-change-the-output-color-of-echo-in-linux
Y:= "\033[33;1m"
R:= "\033[31;1m"
G:= "\033[32;1m"
B:= "\033[34;1m"
X:= "\033[0m"

NAME:= so_long

#extra compile flags -Wunreachable-code -Ofast -g
#extra compile flags -I../LeakSanitizer/include -L../LeakSanitizer -llsan -lc++
CC:= 		cc
CC_FLAGS:=	-Wall -Wextra -Werror -g

MLX_PATH:=	mlx/
MLX_LIB	:=	$(MLX_PATH)libmlx.a
MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit

LIBFT_PATH:=	libft/
LIBFT_LIB:=		$(LIBFT_PATH)libft.a

CFILES:=	so_long.c\
			init.c	map.c	key_hook.c\
			move.c	parse_input.c	put_img.c\
			victory.c

OBJECTS:= $(CFILES:.c=.o)

all: subsys $(NAME)

%.o: %.c
	@echo $(Y)Compiling [$<]...$(X)
	$(CC) $(CC_FLAGS) -Imlx -c -o $<

subsys:
	@echo $(B)
	make -C $(MLX_PATH) all
	@echo $(B)
	make -C $(LIBFT_PATH) all

#https://stackoverflow.com/questions/59287273/how-do-i-compile-using-minilibx
#gcc -Wall -Werror -Wextra -std=gnu99 -I. -g ${OBJS} -lm -lGLEW -lglfw -lGL minilibx/libmlx_Linux.a -o ${NAME}
$(NAME) : $(OBJECTS)
	@echo $(Y)Compiling [$(CFILES)]...$(X)
	@echo $(G)Finished! [$(CFILES)]$(X)
	@echo
	@echo $(Y)Compiling [$(NAME)]...$(X)
	$(CC) $(CC_FLAGS) $(MLX_FLAGS) $(OBJECTS) $(MLX_LIB) $(LIBFT_LIB) -o $(NAME)
	@echo $(G)Finished! [$(NAME)]$(X)

clean:
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJECTS)
	@echo $(R)Removed [$(OBJECTS)]$(X)

fclean: clean
	make -C $(MLX_PATH) fclean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)
	@echo $(R)Removed [$(NAME)]$(X)

re: fclean all

run : all
	./$(NAME)

#make norm, command to check for files that is in the above list
norm:
	norminette libft

.PHONY : all clean fclean re run norm