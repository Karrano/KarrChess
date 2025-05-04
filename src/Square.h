#include "Piece.cpp"

class Square{
	private:
		Piece* piece;
		char sqaureNotation[2];
		int x_coord, y_coord;
	public:
		Square();
		Square(char t, char c);
		Piece* getPiece();
		void setPiece(Piece *newPiece);
		void setXCoord(int i);
		void setYCoord(int i);
		void setCoords(int i, int j);
};
