#include "Board.h"

using namespace std; 

Board::Board(char c, int boardSize) : board(boardSize, vector<Square>(boardSize, Square()))  {
 }

vector<vector<Square> > Board::getBoard() {
	return board; 
}
