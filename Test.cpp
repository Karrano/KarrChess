#include <iostream>
#include "src/Board.cpp"

using namespace std;

int main() {
	Board testBoard;

	vector<vector<Square> > board = testBoard.getBoard();
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			cout << board[i][j].getPiece()->getPieceType() << " ";
		}
		cout << endl;
	}

	return 0;
}
