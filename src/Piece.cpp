#include "Piece.h"

#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std; 


void Piece::setCharArrayPiece(bool array[256]){
	for(int i = 0; i < 256; ++i){
		array[i] = false;
	}

	array['K'] = true;
	array['Q'] = true;
	array['B'] = true;
	array['N'] = true;
	array['R'] = true;
	array['P'] = true;
	array['O'] = true;
}

void Piece::setCharArrayColor(bool array[256]){
	for(int i = 0; i < 256; ++i){
		array[i] = false;
	}

	array['B'] = true;
	array['O'] = true;
	array['W'] = true;
}

Piece::Piece(char t, char c){
	setCharArrayPiece(charArrayPiece);
	if(charArrayPiece[c]){
		pieceType = c;
	} else {
		throw logic_error("Piece character not valid");
	}	
}

char Piece::getPieceType(){
	return pieceType;
}
