/*
 * matrix_utils.c
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#include "matrix_utils.h"
#include <stdio.h>
#include <stdlib.h>

// Print matrix
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

// Print sqr matrix
void matrixsqr_print(const int* mat,int size){
	matrix_print(mat,size,size);
}

// Initialize matrix with numbers from 0 to n*m
void matrix_create(int* mat,int n, int m)
{
	int i;
	for(i = 0 ; i < n*m ; i++,mat++)
	{
		*mat = i;
	}
}

// Initialize matrix with random numbers from 0 to MAX_RAND_NUM
void matrix_create_rand(int* mat, int n,int m)
{
	int i;
	for(i = 0 ; i < n*m ; i++,mat++)
		*mat = (rand()%MAX_RAND_NUM);
}

// Initialize sqr matrix with numbers from 0 to n*n
void matrixsqr_create(int* mat,int size)
{
	matrix_create_rand(mat,size,size);
}

// If num is in matrix, returns its index. if not found returns -1
int matrix_find_num(const int* mat, int num, int n, int m)
{
	int i;
	for(i = 0 ; i < n*m ; i++)
			if(*mat == num)return 1;
	return 0;
}

// Swap mat[n1][m1] with mat[n2][m2]
void matrix_swap(int* mat, int n1, int m1, int n2, int m2, int rowsize)
{
	int temp = *(mat + n1*rowsize + m1);
	*(mat + n1*rowsize + m1) = *(mat + n2*rowsize + m2);
	*(mat + n2*rowsize + m2) = temp;
}

// Swap collum c1 with collum c2
void matrix_swap_collums(int* mat,int c1,int c2,int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
		swap((mat + c1 + i*size),(mat + c2 + i*size));
}

// Swap row r1 with row r2
void matrix_swap_rows(int* mat, int r1, int r2, int size)
{
	int i;
	for(i = 0 ; i < size ; i++)
		swap((mat + r1*size + i),(mat + r2*size + i));
}

// Rotate the matrix by 90 degrees(CLOCKWISE or CCLOCKWISE)
void matrix_rotate(int* mat, int size, int dir)
{
	int i,j;
		for(i = 0 ; i < size/2 ; i++)
		{
			for(j = i ; j < size-i-1 ; j++)
			{
				int temp = *(mat + i*size + j);
				int* top = (mat + i*size + j); //T
				int* right = (mat + j*(size) + size - 1 - i); // R
				int* bottom = (mat + (size-1-i)*size + size - 1 - j); //B
				int* left = (mat + (size - 1 - j)*size + i); //L
				if(dir == CLOCKWISE)
				{
					*top = *left;
					*left = *bottom;
					*bottom = *right;
					*right = temp;
				}else
				{
					*top = *right;
					*right = *bottom;
					*bottom = *left;
					*left = temp;
				}
			}
		}
}

// Swap all Rows/Collums(HERIZONTICAL/VERTICAL) in matrix
void matrix_flip(int* mat, int size, int dir)
{
	int i;
		for(i = 0 ; i < size/2 ; i++)
			if(dir == VERTICAL) matrix_swap_rows(mat,i,size-i-1,size);
			else matrix_swap_collums(mat,i,size-i-1,size);
}

// Swap i with j
void swap(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
