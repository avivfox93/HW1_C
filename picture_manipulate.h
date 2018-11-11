/*
 * picture_manipulate.h
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#ifndef PICTURE_MANIPULATE_H_
#define PICTURE_MANIPULATE_H_

#define MATRIX_SIZE 4

#define CLOCKWISE 1
#define CCLOCKWISE 0

#define VERTICAL 1
#define HERIZONTICAL 0

void PictureManipulation();
void PictureRotate(int*,int,int);
void PictureFlip(int*,int,int);

#endif /* PICTURE_MANIPULATE_H_ */
