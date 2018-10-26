#include   "stdafx.h" 
#include "AI.h"

extern int chess[8][8];
extern int chessbe[8][8];
extern int chessaf[8][8];

extern int next_[2][2];	
extern int DEPTH;

int AI::Value(){
	char i,j;
	int	score=0;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			switch(chessbe[i][j]){
			case self_rook:
				{	if(j==0||j==7)score=score+50;
					score=score+500;
				}break;
			case self_knight:score=score+300;break;
			case self_bishop:score=score+325;break;
			case self_queen:score=score+900;break;
			case self_king:score=score+20000;break;
			case self_pawn:score=score+100;break;
			case opp_rook:score=score-500;break;
			case opp_knight:score=score-300;break;
			case opp_bishop:score=score-325;break;
			case opp_queen:score=score-900;break;
			case opp_king:score=score-20000;break;
			case opp_pawn:score=score-100;break;
			default:score=score;
			}
		}
	}
	return score;
}



void AI::movechessbe(int X0,int Y0,int X,int Y){
	
	
	chessbe[X][Y]=chessbe[X0][Y0];
	chessbe[X0][Y0]=0;
	
}
void AI::movechessaf(int X0,int Y0,int X,int Y){
	chessaf[X][Y]=chessaf[X0][Y0];
	chessaf[X0][Y0]=0;
}


void AI::record(int x,int y,int nx,int ny){
    next_[0][0]=x;next_[0][1]=y;
    next_[1][0]=nx;next_[1][1]=ny;
}

bool AI::valid(int x,int y){
  if(x<0||x>=8||y<0||y>=8)return false;
  return true;
}

int AI::producer(int table[64][2],int x,int y){
    int cont=0,nx,ny,k;
    switch(abs(chessbe[x][y])){											
        case 0:return 0;
        case opp_pawn:
            if(chessbe[x][y]<0){								       
                if(x==1){
					if (chessbe[x+2][y]*chessbe[x][y]==0&&chessbe[x+1][y]==0)
					{
                    table[cont][0]=2;
                    table[cont++][1]=0;
					}
				}
                if(valid(x+1,y+1)&&chessbe[x+1][y+1]*chessbe[x][y]<0&&x!=1){         
                    table[cont][0]=1;
                    table[cont++][1]=1;
                }
                if(valid(x+1,y-1)&&chessbe[x+1][y-1]*chessbe[x][y]<0&&x!=1){			
                    table[cont][0]=1;
                    table[cont++][1]=-1;
                }
                if(valid(x+1,y)&&chessbe[x+1][y]==0&&x!=1){											
                    table[cont][0]=1;
                    table[cont++][1]=0;
                }
            }else{
                 if(x==6){
					 if (chessbe[x-2][y]*chessbe[x][y]==0&&chessbe[x-1][y]==0){//????
                    table[cont][0]=-2;
                    table[cont++][1]=0;
					 }
				 }
                if(valid(x-1,y+1)&&chessbe[x-1][y+1]*chessbe[x][y]<0&&x!=6){
                    table[cont][0]=-1;
                    table[cont++][1]=1;
                }
                if(valid(x-1,y-1)&&chessbe[x-1][y-1]*chessbe[x][y]<0&&x!=6){
                    table[cont][0]=1;
                    table[cont++][1]=-1;
                }
                if(valid(x-1,y)&&chessbe[x-1][y]==0&&x!=6){
                    table[cont][0]=-1;
                    table[cont++][1]=0;
                }
            }
            break;

        case opp_rook:
            for(k=0;k<4;++k){
                for(int len=1;len<8;++len){
					if (valid(nx=x+rook_[k][0]*len,ny=y+rook_[k][1]*len))
					{			
					    if(chessbe[nx][ny]*chessbe[x][y]<=0){											
                            table[cont][0]=nx-x;
                            table[cont++][1]=ny-y;
                        }
                        if(chessbe[nx][ny]!=0)break;					
                    }
				}
            }
            break;
        case opp_knight:
            for(k=0;k<8;++k){
                if(valid(nx=x+knight_[k][0],ny=y+knight_[k][1]))
				{					
					if(chessbe[nx][ny]*chessbe[x][y]<=0){				
                        table[cont][0]=knight_[k][0];
                        table[cont++][1]=knight_[k][1];					
                    }
                }
			}
            break;
        case opp_bishop:
            for(k=0;k<4;++k){
                for(int len=1;len<8;++len){
					if(valid(nx=x+bishop_[k][0]*len,ny=y+bishop_[k][1]*len)){
                    
    					if(chessbe[nx][ny]*chessbe[x][y]<=0){				
                            table[cont][0]=nx-x;
                            table[cont++][1]=ny-y;						
                        }
                        if(chessbe[nx][ny]!=0)break;
                    }
				}
            }
            break;
        case opp_queen:
            for(k=0;k<8;++k){
                for(int len=1;len<8;++len){
					if(valid(nx=x+queen_[k][0]*len,ny=y+queen_[k][1]*len)){
                        if(chessbe[nx][ny]*chessbe[x][y]<=0){			
                            table[cont][0]=nx-x;
                            table[cont++][1]=ny-y;						
                        }
                        if(chessbe[nx][ny]!=0)break;
                    }
				}
            }
            break;
        case opp_king:
            for(k=0;k<8;++k){
                if(valid(nx=x+king_[k][0],ny=y+king_[k][1])){
					if(chessbe[nx][ny]*chessbe[x][y]<=0){
					   table[cont][0]=nx-x;
                        table[cont++][1]=ny-y;
					}
                }
            }
            break;
        default:
            ;
    }
    return cont;
}


int AI::Beta(int alpha,int depth);

int AI::Alpha(int beta,int depth){	
	if(depth>=DEPTH)return -Value();
	int alpha=-32767;
	char i,j;
	int table[64][2];
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){ 
			if(chessbe[i][j]>=0)continue;
			int len=producer(table,i,j);
			for(int k=0;k<len;++k){
			 int nx=i+table[k][0];
			 int ny=j+table[k][1];
			 int piece=chessbe[nx][ny];			 
            movechessbe(i,j,nx,ny);
			int value;
			if(chessbe[nx][ny]==opp_king)value=32767;
			else value=Beta(alpha,depth+1);
			if(alpha<value){
                alpha=value;
                if(depth==0)record(i,j,nx,ny);
            }
			movechessbe(nx,ny,i,j);
			chessbe[nx][ny]=piece;

			if(alpha>=beta)return alpha;
			}
		}
	}return alpha;
}

int AI::Beta(int alpha,int depth){	
	if(depth>=DEPTH)return Value();
	int beta=32767;
	char i,j;
	int table[64][2];
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(chessbe[i][j]<=0)continue;
			int len=producer(table,i,j);
			for(int k=0;k<len;++k){
			 int nx=i+table[k][0];
			 int ny=j+table[k][1];
			 int piece=chessbe[nx][ny];
            movechessbe(i,j,nx,ny);
			int value;
			if(chessbe[nx][ny]==self_king)value=-32767;
			else value=Alpha(beta,depth+1);
			if(beta>value){
                beta=value;         
            }
			movechessbe(nx,ny,i,j);
			chessbe[nx][ny]=piece;
			if(alpha>=beta)return beta;
			}
		}
	}return beta;
}


void AI::changenaltoai(){
	for(int i =0;i<8;i++){
		for(int j=0;j<8;j++){
			switch(chess[i][j])
			{
			case 11:chessbe[i][j]=chessaf[i][j]=-11;
				break;
			case 12:chessbe[i][j]=chessaf[i][j]=-12;
				break;
			case 13:chessbe[i][j]=chessaf[i][j]=-13;
				break;
			case 14:chessbe[i][j]=chessaf[i][j]=-14;
				break;
			case 15:chessbe[i][j]=chessaf[i][j]=-15;
				break;
			case 16:chessbe[i][j]=chessaf[i][j]=-16;
				break;
			case 0:chessbe[i][j]=chessaf[i][j]=0;
				break;
			case 21:chessbe[i][j]=chessaf[i][j]=11;
				break;
			case 22:chessbe[i][j]=chessaf[i][j]=12;
				break;
			case 23:chessbe[i][j]=chessaf[i][j]=13;
				break;
			case 24:chessbe[i][j]=chessaf[i][j]=14;
				break;
			case 25:chessbe[i][j]=chessaf[i][j]=15;
				break;
			case 26:chessbe[i][j]=chessaf[i][j]=16;
				break;
				
				
			}
			
		}
	}
}
void AI::changeaitonal(){
	for(int i =0;i<8;i++){
		for(int j=0;j<8;j++){
			switch(chessaf[i][j])
			{
			case -11:chess[i][j]=11;
				break;
			case -12:chess[i][j]=12;
				break;
			case -13:chess[i][j]=13;
				break;
			case -14:chess[i][j]=14;
				break;
			case -15:chess[i][j]=15;
				break;
			case -16:chess[i][j]=16;
				break;
			case 0:chess[i][j]=0;
				break;
			case 11:chess[i][j]=21;
				break;
			case 12:chess[i][j]=22;
				break;
			case 13:chess[i][j]=23;
				break;
			case 14:chess[i][j]=24;
				break;
			case 15:chess[i][j]=25;
				break;
			case 16:chess[i][j]=26;
				break;
				
				
			}
			
		}
	}
}
