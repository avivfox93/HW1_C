/*
 * picture_manipulate.h
 *
 *  Created on: 8 Nov 2018
 *      Author: aviv
 */

#ifndef PICTURE_MANIPULATE_H_
#define PICTURE_MANIPULATE_H_

#define MATRIX_SIZE 3

void PictureManipulation();
void PictureRotate(const int*,int,int);
void PictureFlipVertical(const int*,int);
void PictureFlipHerizontical(const int*,int);

#endif /* PICTURE_MANIPULATE_H_ */
