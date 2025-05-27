# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hotto <hotto@student.42vienna.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 09:09:30 by hotto             #+#    #+#              #
#    Updated: 2025/04/25 09:09:41 by hotto            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = ft_isalpha.o
OBJ += ft_isdigit.o
OBJ += ft_isalnum.o
OBJ += ft_isascii.o
OBJ += ft_isprint.o
OBJ += ft_strlen.o
OBJ += ft_memset.o
OBJ += ft_bzero.o
OBJ += ft_memcpy.o
OBJ += ft_memmove.o
OBJ += ft_strlcpy.o
OBJ += ft_strlcat.o
OBJ += ft_toupper.o
OBJ += ft_tolower.o
OBJ += ft_strchr.o
OBJ += ft_strrchr.o
OBJ += ft_strncmp.o
OBJ += ft_memchr.o
OBJ += ft_memcmp.o
OBJ += ft_strnstr.o
OBJ += ft_atoi.o
OBJ += ft_calloc.o
OBJ += ft_strdup.o
OBJ += ft_substr.o
OBJ += ft_strjoin.o
OBJ += ft_strtrim.o
OBJ += ft_split.o
OBJ += ft_itoa.o
OBJ += ft_strmapi.o
OBJ += ft_striteri.o
OBJ += ft_putchar_fd.o
OBJ += ft_putstr_fd.o
OBJ += ft_putendl_fd.o
OBJ += ft_putnbr_fd.o

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)
	@echo ">>> CREATED ARCHIVE $(NAME) <<<"

%.o: %.c
	cc -Wall -Wextra -Werror -c $<

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJ)
	@echo ">>> REMOVED OBJECT FILES <<<"
	rm -f .*.swp
	@echo ">>> REMOVED .swp FILES <<<"

fclean: clean
	rm -f $(NAME)
	@echo ">>> REMOVED TARGET $(NAME) <<<"

re: fclean all
