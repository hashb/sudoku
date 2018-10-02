IDIR = include
CC = gcc
CFLAGS = -I$(IDIR) -Wall -Werror -Wextra
SRC_DIR = src

all:
	$(CC) $(CFLAGS) -o sudoku $(SRC_DIR)/libft.c $(SRC_DIR)/solver.c $(SRC_DIR)/sudoku.c $(SRC_DIR)/utilities.c

clean:
	$(RM) sudoku
