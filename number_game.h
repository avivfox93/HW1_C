/*
 * number_game.h
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#ifndef NUMBER_GAME_H_
#define NUMBER_GAME_H_

#define SHUFFLE_COUNT 30

void NumberGame();
void board_shuffle(int*,int,int);
int make_step(int*,int,int,int);
int check_for_winner(const int*,int,int);

#endif /* NUMBER_GAME_H_ */
