# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbeedle <nbeedle@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 13:35:32 by rnoriko           #+#    #+#              #
#    Updated: 2021/05/06 15:05:07 by nbeedle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_bzero.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isprint.c ft_isascii.c ft_strlen.c ft_strrchr.c ft_strncmp.c \
			ft_strchr.c ft_memcpy.c ft_memset.c \
			ft_strlcpy.c \
			ft_substr.c ft_strjoin.c ft_putnbr_fd.c ft_split.c ft_itoa.c\

OBJS			= $(SRCS:.c=.o)

CC				= clang
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

so:
	$(CC) -fPIC -c $(CFLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re so
