# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matoledo <matoledo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 16:09:09 by matoledo          #+#    #+#              #
#    Updated: 2025/04/13 17:15:32 by matoledo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -I

ARCHIVE = libft.a

EXECUTABLE = main

SRCS = $(wildcard *.c)

#Finds all the .c files with wildcard and substitute the final .c for .o with patsubst
#another approach is OBJS = $(SRCS.c=.o)
#what this is saying is: OBJS is a list of SRC but with .o instead of .c
OBJS = $(patsubst %.c, %.o, $(wildcard *.c))

all: $(ARCHIVE)

#command -L to reference the .a file
exe: $(EXECUTABLE)

$(EXECUTABLE) : $(ARCHIVE) $(OBJS)
	$(CC) -o $(EXECUTABLE) $(OBJS) -L $(ARCHIVE)

$(ARCHIVE): $(OBJS)
	ar -r $(ARCHIVE) $(OBJS)

#when the makefile tries to access the .o files but doesn't finds them is gonna search for a rule to create them
#this is that rule
#$@ refers to the target in this case %.o (what is at the left of the :)
#$< refers to the first parameter in this case %.c (what is at the right of the :)
%.o : %.c
	$(CC) -c $(CFLAGS) $@ $<

clean:
	rm -rf $(EXECUTABLE) $(OBJS) $(ARCHIVE)