#include "matrix_utils.h"
#include "picture_manipulate.h"
#include "number_game.h"
#include "messages.h"
#include <stdio.h>

int main(){
	int loop = 1;
	char in;
	do
	{
		print_main_message();
		in = getchar() | 0x20; // to lower case
		switch(in)
		{
		case 'p':
			PictureManipulation();
			break;
		case 'n':
			NumberGame();
			break;
		case 'e':
			loop = 0;
			break;
		default:
			break;
		}
	}while(loop);
	puts(EXIT_MESSAGE);
	return 0;
	int* mat = matrixsqr_create(5);
	matrixsqr_print(mat,5);
}
