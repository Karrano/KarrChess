#include <iostream>
#include "Board.cpp"

using namespace std;

int main() {
	Board testBoard;

	vector<vector<int> > board = testBoard.getBoard();
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			cout << board[i][j] << " ";
		}
		cout << endl;
	}


	cout << "Hej skattemuuuuuus!";
	return 0;
}
