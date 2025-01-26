#include "Piece.cpp"

class Square{
	private:
		Piece* piece;
		char sqaureNotation[2];
		int x_coord, y_coord;
	public:
		Square();

		Square(char c);

		Piece* getPiece();

		void setXCoord(int i);

		void setYCoord(int i);

		void setCoords(int i, int j);
};
