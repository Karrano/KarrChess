#include "Piece.cpp"

class Square{
	private:
		Piece* piece;
		char sqaureNotation[2];
	public:
		Square(){
			piece = new Piece('O');
		}

		Square(char c){
			piece = new Piece(c);
		}


		Piece* getPiece(){
			return piece;
		}
};
