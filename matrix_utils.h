/*
 * matrix_utils.h
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#ifndef MATRIX_UTILS_H_
#define MATRIX_UTILS_H_


#define MAX_RAND_NUM 100

void matrix_print(const int*,int,int);
void matrixsqr_print(const int*,int);
int* matrix_create(int,int);
int* matrix_create_rand(int,int);
int* matrix_game_create(int,int);
int matrix_find_num(const int*,int,int,int);
int* matrixsqr_create(int);
void matrix_swap(int*,int,int,int,int,int);
void matrix_swap_collums(const int*,int*,int,int,int);
void matrix_swap_rows(const int*,int*,int,int,int);
void matrix_copy_row(const int*,int*,int,int);
void matrix_copy_colum(const int*,int*,int,int);
void matrix_copy_row_to_colum(const int*,int*,int,int,int);
void matrix_copy_row_to_colum_rev(const int*,int*,int,int,int);

#endif /* MATRIX_UTILS_H_ */
