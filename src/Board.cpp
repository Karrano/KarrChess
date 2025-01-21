#include <vector>
#include <stdexcept>
#include <iostream>
#include "Square.cpp"

using namespace std; 

class Board{
	private:
		vector<vector<Square> > board; 
		static int boardSize = 8; //Default size for chess Board
	public:
		Board(char c) : board(boardSize, vector<Square>(boardSize, Square()))  {
		 }

		vector<vector<Square> > getBoard() {
			return board; 
		}
};

