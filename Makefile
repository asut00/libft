# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asuteau <asuteau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 16:29:10 by asuteau           #+#    #+#              #
#    Updated: 2024/02/28 09:07:33 by asuteau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -------------------------------- VARIABLES --------------------------------- #

SRCS = 			src/ft_strnstr.c \
				src/ft_isdigit.c \
				src/ft_putstr_fd.c \
				src/ft_strlcpy.c \
				src/ft_strlen.c \
				src/ft_memcmp.c \
				src/ft_putnbr_fd.c \
				src/ft_strchr.c \
				src/ft_striteri.c \
				src/ft_bzero.c \
				src/ft_strjoin.c \
				src/ft_isascii.c \
				src/ft_memcpy.c \
				src/ft_isprint.c \
				src/ft_putendl_fd.c \
				src/ft_toupper.c \
				src/ft_split.c \
				src/ft_strrchr.c \
				src/ft_isalpha.c \
				src/ft_memchr.c \
				src/ft_putchar_fd.c \
				src/ft_memset.c \
				src/ft_substr.c \
				src/ft_strncmp.c \
				src/ft_strmapi.c \
				src/ft_strtrim.c \
				src/ft_memmove.c \
				src/ft_strlcat.c \
				src/ft_calloc.c \
				src/ft_strdup.c \
				src/ft_atoi.c \
				src/ft_isalnum.c \
				src/ft_itoa.c \
				src/ft_tolower.c \

BONUS_SRCS = 	src/ft_lstadd_back.c \
				src/ft_lstadd_front.c \
				src/ft_lstclear.c \
				src/ft_lstdelone.c \
				src/ft_lstiter.c \
				src/ft_lstlast.c \
				src/ft_lstmap.c \
				src/ft_lstnew.c \
				src/ft_lstsize.c \

OS = $(SRCS:.c=.o)

BONUS_OS = $(BONUS_SRCS:.c=.o)

HD = ./inc/

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

# ---------------------------------- RULES ----------------------------------- #

.c.o:
	$(CC) $(CFLAGS) -I $(HD) -c $< -o $(<:.c=.o)

$(NAME) : $(OS)
	ar rcs $(NAME) $(OS)

all: $(NAME)

bonus: $(NAME) $(BONUS_OS)
	ar rcs $(NAME) $(BONUS_OS)

clean:
	rm -f $(OS) $(BONUS_OS)

fclean: clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
