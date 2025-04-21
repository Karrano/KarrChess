#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include <stdexcept>
#include <iostream>
#include <map>

using namespace std;

class Piece{
private:

char pieceType; //'K' - king, 'Q' - queen, 'B' - bishop, 'N' - kNight, 'R' - rook, 'P' - pawn, 'O' -withOut a piece
char color; //'W' - white, 'B' - black, 'O' -withOut a color
string pieceRepresentation;
bool charArrayPiece[256];
bool charArrayColor[256];
void setCharArrayPiece(bool array[256]);
void setCharArrayColor(bool array[256]);
string getPieceRepresentation(char c, char t);

public:
Piece(char c, char t);
string getPieceType();
//TODO: implement
void setCharType();
};

#endif
