#ifndef check_chess_H
#define check_chess_H
class Board1
{
public: 
	Board();
	int Board1::check_rook_move (int x0,int y0,int x,int y);
	int Board1::check_knight_move(int x0,int y0,int x,int y);
	int Board1::check_bishop_move(int x0,int y0,int x,int y);
	
	int Board1::check_Queen_move(int x0,int y0,int x,int y);
	int Board1::check_king_move(int x0,int y0,int x,int y);
	int Board1::check_pawn_move(int x0,int y0,int x,int y);
	bool can_move;
};
#endif