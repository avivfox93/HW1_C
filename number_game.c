/*
 * number_game.c
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */
#include "matrix_utils.h"
#include "number_game.h"
#include "messages.h"
#include <stdlib.h>
#include <stdio.h>

#define N 4
#define M 4

void NumberGame()
{
	int in,valid,*board,arr[N][M];
	board = &arr[0][0];
	matrix_create(board,N,M);
//	int b[N][M] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,0,15}};
//	board = (int*)b;
	BoardShuffle(board,N,M);
	do
	{
		matrix_print(board,N,M);
		do{
			puts(GAME_STEP_MESSAGE);
			scanf("%d",&in);
			valid = MakeStep(board,N,M,in);
			if(!valid)puts(GAME_INVALID_STEP);
		}while(!valid);
	}while(!CheckForWinner(board,N,M));
	puts(GAME_WIN_MESSAGE);
}

void BoardShuffle(int* board, int n, int m)
{
	int i;
	for(i = 0 ; i < SHUFFLE_COUNT ; i++)
	{
		matrix_swap(board,rand()%n,rand()%m,rand()%n,rand()%m,n);
	}
}

int CheckForWinner(const int* board, int n, int m)
{

	int i,last;
	last = *(board++);
	if(last == 0)return 0;
	for(i = 1 ; i < n*m-1 ; i++,board++)
	{
		if(*board < last)return 0;
		last = *board;
	}
	return 1;
}

int MakeStep(int* board, int n, int m, int num)
{
	int i,j,*start;
	start = board;
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++,board++)
		{
			if(*board == 0)
			{
				if(i > 0 && *(board - n) == num){
					matrix_swap(start,i,j,i-1,j,m);
					return 1;
				}else if(i < (n-1) && *(board + n) == num){
					matrix_swap(start,i,j,i+1,j,m);
					return 1;
				}else if(j > 0 && *(board - 1) == num){
					matrix_swap(start,i,j,i,j-1,m);
					return 1;
				}else if(j < (m-1) && *(board + 1) == num){
					matrix_swap(start,i,j,i,j+1,m);
					return 1;
				}
				return 0;

			}
		}
	}
	return 0;
}
