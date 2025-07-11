# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erfarias <erfarias@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 18:22:05 by erfarias          #+#    #+#              #
#    Updated: 2025/07/10 14:45:42 by erfarias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Project Name
NAME = libftprintf.a

# Source files
SRCDIR = .
UTILSDIR = utils
PRINTDIR = printers

# Main source files
SRC = ft_printf.c

# Utils source files
UTILS_SRCS = ft_putchar.c \
			ft_puthex.c \
			ft_putnbr.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putunbr.c

# Printers source files
PRINT_SRCS = ft_print_c.c \
			ft_print_d.c \
			ft_print_p.c \
			ft_print_s.c \
			ft_print_u.c \
			ft_print_x.c

# Add directory prefixes to source files
UTILS_SRCS := $(addprefix $(UTILSDIR)/, $(UTILS_SRCS))
PRINT_SRCS := $(addprefix $(PRINTDIR)/, $(PRINT_SRCS))

# All source files
ALL_SRCS = $(SRC) $(UTILS_SRCS) $(PRINT_SRCS)

# Object files
OBJS = $(ALL_SRCS:.c=.o)

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -f

# Create libftprintf.a from object files
$(NAME): $(OBJS)
	ar rcs $(NAME)	$(OBJS)

# Rule for object files from C files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Default target (build the static library)
all:	$(NAME)

# Clean object files
clean:
	$(RM) $(OBJS)

# Remove object files and the library
fclean: clean
	$(RM) $(NAME)

# Rebuild the library from scratch
re:	fclean all

# Test
# test:
# 	$(CC) $(CFLAGS) *.c utils/*.c -o test.o
# 	./test.o

# Declare phony targets
.PHONY: all clean fclean re bonus test
