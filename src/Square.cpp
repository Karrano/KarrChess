#include "Square.h"

Square::Square(){
	piece = new Piece('O', 'O');
}

Square::Square(char t, char c){
	piece = new Piece(t, c);
}

Piece* Square::getPiece(){
	return piece;
}

void Square::setPiece(Piece *newPiece){
	piece = newPiece;
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
