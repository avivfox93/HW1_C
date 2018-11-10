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
void BoardShuffle(int*,int,int);
int MakeStep(int*,int,int,int);
int CheckForWinner(const int*,int,int);

#endif /* NUMBER_GAME_H_ */
