
const int opp_rook = 11;
const int opp_knight = 12;
const int opp_bishop = 13;
const int opp_queen = 14;
const int opp_king = 15;
const int opp_pawn = 16;
const int self_rook = -11;
const int self_knight = -12;
const int self_bishop = -13;
const int self_queen = -14;
const int self_king =- 15;
const int self_pawn = -16;

const int rook_[4][2]={0,1,1,0,0,-1,-1,0};
const int knight_[8][2]={1,2,2,1,1,-2,-2,1,-1,2,2,-1,-1,-2,-2,-1};
const int bishop_[4][2]={1,1,-1,1,1,-1,-1,-1};
const int queen_[8][2]={1,0,1,1,0,1,-1,1,0,-1,-1,-1,0,-1,1,-1};
const int king_[8][2]={1,0,1,1,0,1,-1,1,0,-1,-1,-1,0,-1,1,-1};


class AI{
public:

	int Value();
	void movechessbe(int X0,int Y0,int X,int Y);
	void movechessaf(int X0,int Y0,int X,int Y);
	void record(int x,int y,int nx,int ny);
	bool valid(int x,int y);
	int producer(int table[64][2],int x,int y);
	int Beta(int alpha,int depth);
	int Alpha(int beta,int depth);
	void changenaltoai();
	void changeaitonal();
};


