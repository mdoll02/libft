# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdoll <mdoll@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 10:22:36 by mdoll             #+#    #+#              #
#    Updated: 2023/02/09 10:10:14 by mdoll            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_printf.c pchar.c pstr.c pperc.c pdecint.c pudec.c phex.c pvoidp.c \
		get_next_line_bonus.c get_next_line_utils_bonus.c

OBJS = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	@ $(CC) -c $(CFLAGS) $< -o ${<:.c=.o}


$(NAME): $(OBJS)
	@ gcc $(CFLAGS) -c $(SRC)
	@ ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	@ rm -f *.o

fclean: clean
	@ rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re