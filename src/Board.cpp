#include <vector>
#include <stdexcept>
#include <iostream>
#include "Square.cpp"

using namespace std; 

class Board{
	private:
		vector<vector<Square> > board; 
	public:
		Board(char c) : board(8, vector<Square>(8, Square()))  {
		 }

		vector<vector<Square> > getBoard() {
			return board; 
		}
};

