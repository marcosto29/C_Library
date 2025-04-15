# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 16:09:09 by matoledo          #+#    #+#              #
#    Updated: 2025/04/15 16:11:02 by matoledo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -I

NAME = libft.a

EXECUTABLE = main

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \


#Finds all the .c files with wildcard and substitute the final .c for .o with patsubst
#another approach is OBJS = $(SRCS.c=.o)
#what this is saying is: OBJS is a list of SRC but with .o instead of .c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

#command -L to reference the .a file
exe: $(EXECUTABLE)

$(EXECUTABLE) : $(NAME) $(OBJS)
	$(CC) -o $(EXECUTABLE) $(OBJS) -L $(NAME)

$(NAME): $(OBJS)
	ar -r $(NAME) $(OBJS)

#when the makefile tries to access the .o files but doesn't finds them is gonna search for a rule to create them
#this is that rule
#$@ refers to the target in this case %.o (what is at the left of the :)
#$< refers to the first parameter in this case %.c (what is at the right of the :)
%.o : %.c
	$(CC) -c $(CFLAGS) $@ $<

clean:
	rm -rf $(EXECUTABLE) $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all