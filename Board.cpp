#include <vector>

using namespace std; 

class Board{
	private:
		vector<vector<int> > board; 
	public:
		Board() : board(8, vector<int>(8, 5))  {
		 }

		vector<vector<int> > getBoard() {
			return board; 
		}
};
