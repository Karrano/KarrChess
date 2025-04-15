#include "Board.h"

using namespace std; 

Board::Board() : board(8, vector<Square>(8, Square())) {
	//Initiating the Balck Pieces
	board[0][0] = Square('B', 'R');
	board[0][1] = Square('B', 'N');
	board[0][2] = Square('B', 'B');
	board[0][3] = Square('B', 'Q');
	board[0][4] = Square('B', 'K');
	board[0][5] = Square('B', 'B');
	board[0][6] = Square('B', 'N');
	board[0][7] = Square('B', 'R');

	//Initiatin the Black Pawns
	for(int i = 0; i < 8; i++){
		board[1][i] = Square('B', 'P');
	}

	//Initiating the White Pieces
	board[7][0] = Square('W', 'R');
	board[7][1] = Square('W', 'N');
	board[7][2] = Square('W', 'B');
	board[7][3] = Square('W', 'Q');
	board[7][4] = Square('W', 'K');
	board[7][5] = Square('W', 'B');
	board[7][6] = Square('W', 'N');
	board[7][7] = Square('W', 'R');

	for(int i = 0; i < 8; i++){
		board[6][i] = Square('W', 'P');
	}
}

Board::Board(char c, int boardSize) : board(boardSize, vector<Square>(boardSize, Square()))  {
 }


vector<vector<Square> > Board::getBoard() {
	return board; 
}
