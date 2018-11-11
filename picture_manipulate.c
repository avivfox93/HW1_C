/*
 * picture_manipulate.c
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#include "picture_manipulate.h"
#include "matrix_utils.h"
#include "messages.h"
#include <stdio.h>
#include <stdlib.h>

void PictureManipulation()
{
	int in,loop,mat[MATRIX_SIZE][MATRIX_SIZE],*arr;
	arr = &mat[0][0];
	matrixsqr_create(arr,MATRIX_SIZE);
	matrixsqr_print(arr,MATRIX_SIZE);
	loop = 1;
	do
	{
		print_picture_manipulate_message();
		scanf(" %d",&in);
		switch(in)
		{
		case 1:
			PictureRotate(arr,MATRIX_SIZE,CLOCKWISE);
			break;
		case 2:
			PictureRotate(arr,MATRIX_SIZE,CCLOCKWISE);
			break;
		case 3:
			PictureFlip(arr,MATRIX_SIZE,VERTICAL);
			break;
		case 4:
			PictureFlip(arr,MATRIX_SIZE,HERIZONTICAL);
			break;
		case -1:
			loop = 0;
			break;
		default:
			break;
		}
	}while(loop);
}

void PictureRotate(int* mat, int size, int clockwise)
{
	matrix_rotate(mat,size,clockwise);
	print_picture_after_message();
	matrixsqr_print(mat,size);
}

void PictureFlip(int* mat, int size, int vertical)
{
	matrix_flip(mat,size,vertical);
	print_picture_after_message();
	matrixsqr_print(mat,size);
}



