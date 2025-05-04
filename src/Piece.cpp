#include "Piece.h"

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

string Piece::getPieceRepresentation(char c, char t){
	map<string, string> map{
		{"OO", "\u25A1"}, //Empty Piece

		{"WK", "\u2654"}, //White King
		{"WQ", "\u2655"}, //White Queen
		{"WR", "\u2656"}, //White Rook
		{"WB", "\u2657"}, //White Bishop
		{"WN", "\u2658"}, //White kNight
		{"WP", "\u2659"}, //White Pawn


		{"BK", "\u265A"}, //Black King
		{"BQ", "\u265B"}, //Black Queen
		{"BR", "\u265C"}, //Black Rook
		{"BB", "\u265D"}, //Black Bishop
		{"BN", "\u265E"}, //Black kNight
		{"BP", "\u265F"}, //Black Pawn
	};

	string charString = string{c, t};

	return map[charString];
}

Piece::Piece(char c, char t){
	setCharArrayPiece(charArrayPiece);
	setCharArrayColor(charArrayColor);
	if(charArrayPiece[t]){
		pieceType = t;
	} else {
		throw logic_error("Piece type not valid");
	}	

	if(charArrayColor[c]){
		color = c;
	} else {
		throw logic_error("Piece color not valid");
	}

	pieceRepresentation = getPieceRepresentation(color, pieceType);
}

string Piece::getPieceType(){
	return pieceRepresentation;
}
