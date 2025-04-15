#ifndef PIECE_H
#define PIECE_H

class Piece{
private:

void setCharArrayPiece(bool array[256]);
void setCharArrayColor(bool array[256]);
char pieceType; //'K' - king, 'Q' - queen, 'B' - bishop, 'N' - kNight, 'R' - rook, 'P' - pawn, 'O' -withOut a piece
char color; //'W' - white, 'B' - black, 'O' -withOut a color
bool charArrayPiece[256];
bool charArrayColor[256];

public:
Piece(char t, char c);
char getPieceType();
//TODO: implement
void setCharType();
};

#endif
