# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 11:39:15 by amalsago          #+#    #+#              #
#    Updated: 2020/03/07 18:24:05 by amalsago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# General

CHECKER     = checker
PUSH_SWAP   = push_swap
LIBNAME     = libft.a

# **************************************************************************** #
# GNU Compiler Collection

GCC         = gcc
WOPT        = -Wall -Wextra -Werror -g -g3#-fsanitize=address
OOPT        = -O2
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

LIBDIR      = libft
SRCDIR      = ./sources
OBJDIR      = ./objects
INCDIR      = ./includes

# **************************************************************************** #
# List of source files

SRC_SHARED     = errors.c\
                 operations.c\
                 parse_args.c\
                 push.c\
                 reverse_rotate.c\
                 rotate.c\
                 stack.c\
                 swap.c\
                 is_sorted.c\
                 tools.c

SRC_CHECKER    = main_ch.c\
                 $(SRC_SHARED)

SRC_PUSHSWAP   = main_ps.c\
                 fast_rotate.c\
                 get_index.c\
                 qsort_ps.c\
                 repeat_op.c\
                 small_sort.c\
                 sort_stack.c\
                 $(SRC_SHARED)

# **************************************************************************** #
# Automatic variables where are listed the names of sources and objects files

SRC_CH      = $(addprefix $(SRCDIR)/, $(SRC_CHECKER))
SRC_PS      = $(addprefix $(SRCDIR)/, $(SRC_PUSHSWAP))
OBJ_CH      = $(addprefix $(OBJDIR)/, $(SRC_CHECKER:.c=.o))
OBJ_PS      = $(addprefix $(OBJDIR)/, $(SRC_PUSHSWAP:.c=.o))
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

all: $(LFT) $(CHECKER) $(PUSH_SWAP)

$(LFT): FORCE
	@$(MAKE) $(LIBDIR)

$(CHECKER): $(LFT) $(OBJ_CH)
	@$(GCC) $(WOPT) $(OBJ_CH) $(LFT) -o $(CHECKER)
	@printf $(CR)$(GREEN)"✓ $(CHECKER) is created\n"$(EOC)

$(PUSH_SWAP): $(LFT) $(OBJ_PS)
	@$(GCC) $(EMF) $(WOPT) $(OBJ_PS) $(LFT) -o $(PUSH_SWAP)
	@printf $(CR)$(GREEN)"✓ $(PUSH_SWAP) is created\n"$(EOC)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(MKDIR) $(dir $@)
	@$(GCC) $(EMF) $(WOPT) $(OOPT) $(IOPT) -c $< -o $@
	@printf $(CR)"[ $(BASENAME)/%s ]"$(CLEAR) $@

clean:
	@if [ -d $(OBJDIR) ]; then \
		$(RM) $(OBJDIR) \
		&& printf $(CR)$(RED)"✗ The objects files of $(CHECKER) " \
		&& printf "and $(PUSH_SWAP) are cleaned\n"$(EOC)\
		&& $(MAKE) $(LIBDIR) clean; \
	fi

fclean: clean
	@if [ -e $(CHECKER) ]; then \
		$(RM) $(CHECKER) \
		&& printf $(CR)$(RED)"✗ $(CHECKER) is cleaned\n"$(EOC); \
	fi
	@if [ -e $(PUSH_SWAP) ]; then \
		$(RM) $(PUSH_SWAP) \
		&& printf $(CR)$(RED)"✗ $(PUSH_SWAP) is cleaned\n"$(EOC); \
	fi

re: fclean all

norm:
	@$(NORMINETTE) $(SRCDIR) $(INCDIR) $(LIBDIR)/sources | $(LESS)

.PHONY: all clean fclean re norm

FORCE:
