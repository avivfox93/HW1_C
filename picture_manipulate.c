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
			PictureRotate(arr,MATRIX_SIZE,1);
			break;
		case 2:
			PictureRotate(arr,MATRIX_SIZE,0);
			break;
		case 3:
			PictureFlipHerizontical(arr,MATRIX_SIZE);
			break;
		case 4:
			PictureFlipVertical(arr,MATRIX_SIZE);
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

void PictureFlipVertical(int* mat, int size)
{
	int i;
	for(i = 0 ; i < size/2 ; i++)
		matrix_swap_collums(mat,i,size-i-1,size);
	print_picture_after_message();
	matrixsqr_print(mat,size);
}

void PictureFlipHerizontical(int* mat, int size)
{
	int i;
	for(i = 0 ; i < size/2 ; i++)
		matrix_swap_rows(mat,i,size-i-1,size);
	print_picture_after_message();
	matrixsqr_print(mat,size);
}



