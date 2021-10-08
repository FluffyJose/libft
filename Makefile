# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfreddy <sfreddy@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/25 13:35:32 by rnoriko           #+#    #+#              #
#    Updated: 2021/10/08 23:28:54 by sfreddy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_bzero.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isprint.c ft_isascii.c ft_strlen.c ft_strrchr.c ft_strncmp.c \
			ft_strchr.c ft_memcpy.c ft_memset.c ft_strlcat.c \
			ft_strlcpy.c ft_strtrim.c ft_strdup.c ft_toupper.c ft_tolower.c\
			ft_substr.c ft_strjoin.c ft_putnbr_fd.c ft_split.c ft_itoa.c\

OBJS			= $(SRCS:.c=.o)


BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)


CC				= clang
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re so
