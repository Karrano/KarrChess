#include "Piece.h"

#include <vector>
#include <stdexcept>
#include <iostream>

using namespace std; 


class Piece{
	private:
		void setCharArray(bool array[256]){
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

		char pieceType; //'K' - king, 'Q' - queen, 'B' - bishop, 'N' - kNight, 'R' - rook, 'P' - pawn, 'O' -withOut a piece
		bool charArray[256];
	public:
		bool check;
		Piece(char c){
			setCharArray(charArray);
			if(charArray[c]){
				pieceType = c;
			} else {
				throw logic_error("Piece character not valid");
			}	
		}

		char getPieceType(){
			return pieceType;
		}
};
