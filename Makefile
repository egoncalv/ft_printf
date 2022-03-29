# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egoncalv <egoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 01:22:21 by egoncalv          #+#    #+#              #
#    Updated: 2022/03/29 18:55:20 by egoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FLAG = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC =	src/ft_printf.c \
		src/ft_treat_hex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C libft/ bonus
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) was created"

%.o: %.c 
	@gcc $(FLAG) -c $< -o $@

clean:
	@$(MAKE) -C libft/ clean
	@rm -f $(OBJ)

fclean: clean
	@$(MAKE) -C libft/ clean
	@rm -f $(NAME)
	@rm -f a.out
	@echo "$(NAME) removed"

re: fclean $(NAME)

test:
	@gcc main.c libftprintf.a libft/libft.a

retest: re test
	@echo "\n\n\n"
	@./a.out

.PHONY: all clean fclean re bonus 
