# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 11:39:15 by amalsago          #+#    #+#              #
#    Updated: 2020/03/03 20:15:22 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# General

NAME        = push_swap
LIBNAME     = libft.a

# **************************************************************************** #
# GNU Compiler Collection

GCC         = gcc
WOPT        = -Wall -Wextra -Werror -g -g3
OOPT        = -O3
IOPT        = -I $(INCDIR) -I $(LIBDIR)/$(INCDIR)

# **************************************************************************** #
# System commands

AR          = ar -rc
LESS        = less
MAKE        = make -sC
RANLIB      = ranlib
NORMINETTE  = /usr/bin/norminette
MKDIR       = mkdir -p
RM          = rm -rf

# **************************************************************************** #
# Directories of source and object files

LIBDIR      = ../libft
SRCDIR      = ./sources
OBJDIR      = ./objects
INCDIR      = ./includes

# **************************************************************************** #
# List of source files

SRCNAME     = errors.c\
              get_index.c\
              sort2.c\
              sort3.c\
              sort4.c\
              sort5.c\
              main.c\
              qsort_ps.c\
              operations.c\
              parse_args.c\
              push.c\
              reverse_rotate.c\
              repeat_op.c\
              rotate.c\
              sort_stack.c\
              stack.c\
              swap.c\
              tools.c\
			  check_sort.c

# **************************************************************************** #
# Automatic variables where are listed the names of sources and objects files

SRC         = $(addprefix $(SRCDIR)/, $(SRCNAME))
OBJ         = $(addprefix $(OBJDIR)/, $(SRCNAME:.c=.o))
LFT         = $(addprefix $(LIBDIR)/, $(LIBNAME))

# **************************************************************************** #
# Extra

CR          = "\r"$(CLEAR)
CLEAR       = "\\033[0K"
EOC         = "\033[0;0m"
RED         = "\033[0;31m"
GREEN       = "\033[0;32m"
BASENAME    = `basename $(PWD)`

# **************************************************************************** #
# Rules

all: $(NAME) $(LFT)

$(NAME): $(LFT) $(OBJ)
	@$(GCC) $(WOPT) $(OBJ) $(LFT) -o $(NAME)
	@printf $(CR)$(GREEN)"✓ $(NAME) is created\n"$(EOC)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(MKDIR) $(dir $@)
	@$(GCC) $(WOPT) $(OOPT) $(IOPT) -c $< -o $@
	@printf $(CR)"[ $(BASENAME)/%s ]"$(CLEAR) $@

$(LFT): FORCE
	@$(MAKE) $(LIBDIR)

clean:
	@if [ -d $(OBJDIR) ]; then \
		$(RM) $(OBJ) $(OBJDIR) \
		&& printf $(CR)$(RED)"✗ The objects files of $(NAME) are cleaned\n"$(EOC)\
		&& $(MAKE) $(LIBDIR) clean; \
	fi

fclean: clean
	@if [ -e $(NAME) ]; then \
		$(RM) $(NAME) \
		&& printf $(CR)$(RED)"✗ $(NAME) is cleaned\n"$(EOC) \
		&& $(MAKE) $(LIBDIR) fclean; \
	fi

re: fclean all

norm:
	@$(NORMINETTE) $(SRCDIR) $(INCDIR) $(LIBDIR)/sources | $(LESS)

.PHONY: all clean fclean re norm

FORCE:
