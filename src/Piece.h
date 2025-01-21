#ifndef PIECE_H
#define PIECE_H

class Piece{
private:

void setCharArray(bool array[256]);
char pieceType;
bool charArray[256];

public:
Piece(char c);
char getPieceType();
//TODO: implement
void setCharType();
};

#endif
