#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Square.cpp" 

using namespace std;

class Board{
	private:
		vector<vector<Square> > board;
		int boardSize;
		Square* findSquare(string sqaureNotation);
	public:
		Board();
		Board(char c, int boardSize = 8);
		vector<vector<Square> > getBoard();
		void printBoard();
		void movePiece(Square *from, Square *to);
		void testMethod();
};

#endif
