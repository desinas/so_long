# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:49:17 by dkalkasi          #+#    #+#              #
#    Updated: 2023/01/30 13:47:23 by dkalkasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Y:= "\033[33;1m"
R:= "\033[31;1m"
G:= "\033[32;1m"
B:= "\033[34;1m"
X:= "\033[0m"

NAME:= libft.a

CC:=		cc
CFLAGS:=	-c -Wall -Wextra -Werror

SRCS:=													\
		ft_isalpha.c	ft_isdigit.c					\
		ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
		ft_strlen.c		ft_memset.c		ft_bzero.c		\
		ft_memcpy.c		ft_memmove.c					\
		ft_strlcpy.c	ft_strlcat.c					\
		ft_toupper.c	ft_tolower.c					\
		ft_strchr.c		ft_strrchr.c	ft_strncmp.c	\
		ft_memchr.c		ft_memcmp.c						\
		ft_strnstr.c	ft_atoi.c		ft_calloc.c		\
		ft_strdup.c		ft_substr.c						\
		ft_strjoin.c	ft_strtrim.c					\
		ft_split.c		ft_itoa.c						\
		ft_strmapi.c	ft_striteri.c					\
		ft_putchar_fd.c	ft_putstr_fd.c					\
		ft_putendl_fd.c	ft_putnbr_fd.c					\
		get_next_line.c			\
		get_next_line_utils.c

OBJS:= $(SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo $(Y)Compiling [$<]...$(X)

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(Y)Compiling [$(NAME)]...$(X)
	@ar -rcs $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo $(G)Finished [$(NAME)]$(X)
	@echo

clean:
	rm -f $(OBJS)
	@echo $(R)Removed [$(OBJS)]$(X)

fclean: clean
	rm -f $(NAME)
	@echo $(R)Removed [$(NAME)]$(X)

re: fclean all

.PHONY: all clean fclean re