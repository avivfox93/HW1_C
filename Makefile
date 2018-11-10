
CC = gcc
OBJS = main.o matrix_utils.o messages.o number_game.o picture_manipulation.o
EXEC = prog
COMP_FLAG = -std=c99 -Wall -Werror

$( EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.c matrix_utils.c picture_manipulation.c number_game.c messages.c
	$(CC) -c $(COMP_FLAG) $*.c

matrix_utils.o: matrix_utils.c
	$(CC) -c $(COMP_FLAG) $*.c

picture_manipulation.o: picture_manipulation.c matrix_utils.c messages.c
	$(CC) -c $(COMP_FLAG) $*.c

number_game.o: number_game.c matrix_utils.c messages.c
	$(CC) -c $(COMP_FLAG) $*.c

messages.o: messages.c
	$(CC) -c $(COMP_FLAG) $*.c
	
clean:
	em -f $(OBJS) $(EXEC)