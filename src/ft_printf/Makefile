# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oriabenk <oriabenk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/13 12:39:33 by oriabenk          #+#    #+#              #
#    Updated: 2024/10/13 14:57:32 by oriabenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

COMPILE		= cc

FLAGS		= -Wall -Werror -Wextra

CFILES		= ft_printf.c ft_print.c ft_strlen.c ft_strdup.c 
OFILES		= $(CFILES:.c=.o)

INCLUDES	= -I ./libft

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $@ $^

%.o: %.c ft_printf.h 
	$(COMPILE) -c $(FLAGS) -o $@ $<

clean:
	$(RM) $(OFILES) $(OFILES_BONUS)

fclean: clean
	$(RM) $(NAME)

bonus: $(OFILES) $(OFILES_BONUS)
	ar rcs $(NAME) $(OFILES) $(OFILES_BONUS)

re: fclean all

norm:
	norminette $(CFILES)

.PHONY: all clean fclean re norm
