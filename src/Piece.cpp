#include "Piece.h"

#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std; 


void Piece::setCharArray(bool array[256]){
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

Piece::Piece(char c){
	setCharArray(charArray);
	if(charArray[c]){
		pieceType = c;
	} else {
		throw logic_error("Piece character not valid");
	}	
}

char Piece::getPieceType(){
	return pieceType;
}
