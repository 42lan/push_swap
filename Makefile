# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/18 16:39:15 by amalsago          #+#    #+#              #
#    Updated: 2020/02/24 19:07:33 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT         = libft/
CHECKER       = checker/
PUSH_SWAP     = push_swap/

MAKE          = make -sC

all: 
	@$(MAKE) $(LIBFT)
	@$(MAKE) $(CHECKER)
	@$(MAKE) $(PUSH_SWAP)

clean:
	@$(MAKE) $(LIBFT) clean
	@$(MAKE) $(CHECKER) clean
	@$(MAKE) $(PUSH_SWAP) clean

fclean: clean
	@$(MAKE) $(LIBFT) fclean
	@$(MAKE) $(CHECKER) fclean
	@$(MAKE) $(PUSH_SWAP) fclean

re: fclean all

.PHONY: all clean fclean re

FORCE:
