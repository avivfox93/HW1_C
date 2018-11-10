
#include "messages.h"
#include <stdio.h>

void print_main_message()
{
	puts(MESSAGE);
	puts("P/p - Picture Manipulation");
	puts("N/n - Number Game");
	puts("E/e - Quit");
}

void print_picture_manipulate_message()
{
	puts(MESSAGE);
	puts("1 - 90 degree clockwise");
	puts("2 - 90 degree counter clockwise");
	puts("3 - Flip Horizontal");
	puts("4 - Flip Vertical");
	puts("-1 - Quit");
}

void print_picture_after_message(){
	puts(AFTER_PICTURE);
}
