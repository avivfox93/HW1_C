
CC = gcc
OBJS = main.o matrix_utils.o messages.o number_game.o picture_manipulate.o
EXEC = prog
COMP_FLAG = -std=c99 -Wall -Werror

$(EXEC) : $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.c matrix_utils.h picture_manipulate.h number_game.h messages.h
	$(CC) -c $(COMP_FLAG) $*.c

matrix_utils.o: matrix_utils.c matrix_utils.h
	$(CC) -c $(COMP_FLAG) $*.c

picture_manipulate.o: picture_manipulate.c picture_manipulate.h matrix_utils.h messages.h
	$(CC) -c $(COMP_FLAG) $*.c

number_game.o: number_game.c number_game.h matrix_utils.h messages.h
	$(CC) -c $(COMP_FLAG) $*.c

messages.o: messages.c messages.h
	$(CC) -c $(COMP_FLAG) $*.c
	
clean:
	rm -f $(OBJS) $(EXEC)