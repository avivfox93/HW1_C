/*
 * matrix_utils.c
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#include "matrix_utils.h"
#include <stdio.h>
#include <stdlib.h>

void matrix_print(const int* mat, int n, int m)
{
	int i,j;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++,mat++)
		{
			printf("%5d",*mat);
		}
		putchar('\n');
	}
	putchar('\n');
}

void matrixsqr_print(const int* mat,int size){
	matrix_print(mat,size,size);
}

int* matrix_create(int n, int m)
{
	int i,*res;
	res = malloc(sizeof(int)*n*m);
	for(i = 0 ; i < n*m ; i++)
	{
		*(res + i) = i;
	}
	return res;
}

int* matrix_create_rand(int n,int m)
{
	int i;
	int* res = malloc(sizeof(int)*n*m);
	int* mat = res;
	for(i = 0 ; i < n*m ; i++,mat++)
		*mat = (rand()%MAX_RAND_NUM);
	return res;
}

int matrix_find_num(const int* mat, int num, int n, int m)
{
	int i;
	for(i = 0 ; i < n*m ; i++)
			if(*mat == num)return 1;
	return 0;
}

int* matrixsqr_create(int size)
{
	return matrix_create(size,size);
}

void matrix_swap(int* mat, int n1, int m1, int n2, int m2, int rowsize)
{
	int temp = *(mat + n1*rowsize + m1);
	*(mat + n1*rowsize + m1) = *(mat + n2*rowsize + m2);
	*(mat + n2*rowsize + m2) = temp;
}

void matrix_swap_collums(int* mat,int c1,int c2,int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
	{
		int temp = *(mat + c1 + i*size);
		*(mat + c1 + i*size) =  *(mat + c2 + i*size);
		*(mat + c2 + i*size) = temp;
	}
}

void matrix_swap_rows(int* mat, int r1, int r2, int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
	{
		int temp = *(mat + r1*size + i);
		*(mat + r1*size + i) = *(mat + r2*size + i);
		*(mat + r2*size + i) = temp;
	}
}

void matrix_copy_row(const int* mat, int* res, int row, int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
		*(res + i + row*size) = *(mat + i + row*size);
}

void matrix_copy_colum(const int* mat, int* res, int col, int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
		*(res + i*size + col) = *(mat + i*size + col);
}

void matrix_copy_row_to_colum(const int* mat, int* res, int row, int col, int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
		*(res + i*size + col) = *(mat + i + row*size);
}

void matrix_copy_row_to_colum_rev(const int* mat, int* res, int row, int col, int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
		*(res + size*(size-i-1) + col) = *(mat + i + row*size);
}
