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
void matrix_create(int*,int,int);
void matrix_create_rand(int*,int,int);
int matrix_find_num(const int*,int,int,int);
void matrix_rotate(int*,int,int);
void matrixsqr_create(int*,int);
void matrix_swap(int*,int,int,int,int,int);
void matrix_swap_collums(int*,int,int,int);
void matrix_swap_rows(int*,int,int,int);

#endif /* MATRIX_UTILS_H_ */
