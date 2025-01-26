#include "Square.h"

Square::Square(){
	piece = new Piece('O');
}

Square::Square(char c){
	piece = new Piece(c);
}

Piece* Square::getPiece(){
	return piece;
}

void Square::setXCoord(int i){
	 x_coord = i;
}

void Square::setYCoord(int i){
	y_coord = i;
}

void Square::setCoords(int i, int j){
	x_coord = i;
	y_coord = j;
}
