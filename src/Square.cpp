#include "Piece.cpp"

class Square{
	private:
		Piece* piece;
		char sqaureNotation[2];
		int x_coord, y_coord;
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

		void setXCoord(int i){
			 x_coord = i;
		}

		void setYCoord(int i){
			y_coord = i;
		}

		void setCoords(int i, int j){
			x_coord = i;
			y_coord = j;
		}
};
