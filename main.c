#include "matrix_utils.h"
#include "picture_manipulate.h"
#include "number_game.h"
#include "messages.h"
#include <stdio.h>

int main(){
	char in;
	int loop = 1;
	do
	{
		print_main_message();
		scanf(" %c",&in);
		switch(in | 0x20)
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
}
