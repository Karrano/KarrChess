#ifndef PIECE_H
#define PIECE_H

class Piece{
private:

void setCharArray(bool array[256]);
char pieceType; //'K' - king, 'Q' - queen, 'B' - bishop, 'N' - kNight, 'R' - rook, 'P' - pawn, 'O' -withOut a piece
bool charArray[256];

public:
Piece(char c);
char getPieceType();
//TODO: implement
void setCharType();
};

#endif
