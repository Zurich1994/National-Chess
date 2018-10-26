#include   "stdafx.h" 
#include "chessgo.h"
#include<cmath>
extern int chess[8][8];
int Board1::check_rook_move (int x0,int y0,int x,int y)
{
	bool can_move=false;
	if (((chess[x0][y0]==21||chess[x0][y0]==24)&&(chess[x][y]==0||chess[x][y]==16||
		chess[x][y]==11||chess[x][y]==12||chess[x][y]==13||chess[x][y]==14||chess[x][y]==15))
		||((chess[x0][y0]==11||chess[x0][y0]==14)&&(chess[x][y]==0||chess[x][y]==26||chess[x][y]==21||
		chess[x][y]==22||chess[x][y]==23||chess[x][y]==24||chess[x][y]==25)))
	{
		can_move=true;
		if(y==y0)                  // 车横向移动
		{
			if (x>(x0+1))
			{
				for(int j=(x0+1);j<x;j++)
				{
					if (chess[j][y]!=0){
						can_move=false;}
				}
			}
			else if (x<(x0-1))
			{
				for(int j=x+1;j<x0;j++)
				{ 
					if(chess[j][y]!=0){
						can_move=false;}
				}
			}
			else {}
		}	
		else if (x==x0)            //车纵向移动
		{ 
			if(y>(y0+1))
			{
				for (int j=y0+1;j<y;j++)
				{ 
					if(chess[x][j]!=0){
						can_move=false;}
				}
			}
			else if(y<(y0-1))
			{
				for(int j=y+1;j<y0;j++)
				{
					if (chess[x][j]!=0)
						can_move=false;
				}	
			}
			
			else{}
		}	
		else can_move=false;
	}
	return  can_move;
}






int Board1::check_knight_move(int x0,int y0,int x,int y)
{
	bool can_move=false;
	if( ( (chess[x0][y0]==22&&(chess[x][y]==0||chess[x][y]==16||chess[x][y]==11||
		chess[x][y]==12||chess[x][y]==13||chess[x][y]==14||chess[x][y]==15 ) )
		||( chess[x0][y0]==12&& ( chess[x][y]==0||chess[x][y]==26||chess[x][y]==21||
		chess[x][y]==22||chess[x][y]==23||chess[x][y]==24||chess[x][y]==25 ) ) ) )
	{
		//马走日字
		if((abs(x-x0)==2&&abs(y-y0)==1)||(abs(x-x0)==1&&abs(y-y0)==2))
		{
			can_move=true;
		}
	} 
	return can_move;
}


int Board1::check_bishop_move(int x0,int y0,int x,int y)
{	
	bool can_move=false;
	//斜走斜线，且中间都为空格
	if(((chess[x0][y0]==13||chess[x0][y0]==14)&&(chess[x][y]==0||chess[x][y]==26||chess[x][y]==21||
		chess[x][y]==22||chess[x][y]==23||chess[x][y]==24||chess[x][y]==25))||((chess[x0][y0]==23||
		chess[x0][y0]==24)&&(chess[x][y]==0||chess[x][y]==16||chess[x][y]==11||chess[x][y]==12||
		chess[x][y]==13||chess[x][y]==14||chess[x][y]==15)))
	{ 
		can_move=true;
		if(abs(x-x0)==abs(y-y0))
		{
			int m,n;
			if (x>x0&&y>y0)
			{
				for(m=x0+1,n=y0+1;m<x&&n<y;m++,n++)
				{ 
					if(chess[m][n]!=0){
						can_move=false;}
				}
			}
			else if (x<x0&&y>y0)
			{
				for(m=x0-1,n=y0+1;m>x&&n<y;m--,n++)
				{
					if(chess[m][n]!=0){
						can_move=false;}
				}
			}
			else if (x>x0&&y<y0)
			{
				for (m=x0+1,n=y0-1;m<x&&n>y;m++,n--)
				{
					if(chess[m][n]!=0){
						can_move=false;}
				}
			}
			else if (x<x0&&y<y0)
			{
				for (m=x0-1,n=y0-1;m>x&&n>y;m--,n--)
				{
					if (chess[m][n]!=0){
						can_move=false;}
				}
			}
			else can_move=true;
		}
		else
			can_move=false;
	}
	return can_move;
}

int Board1::check_Queen_move(int x0,int y0,int x,int y)
{
	//后兼具车和相的功能;
	bool	can_move=false;
	if((chess[x0][y0]==14&&(chess[x][y]==0||chess[x][y]==26||
		chess[x][y]==21||chess[x][y]==22||chess[x][y]==23||chess[x][y]==24
		||chess[x][y]==25))||(chess[x0][y0]==24&&(chess[x][y]==0||chess[x][y]==16||
		chess[x][y]==11||chess[x][y]==12||chess[x][y]==13||chess[x][y]==14||chess[x][y]==15
		)))
	{
		if (check_rook_move(x0,y0,x,y)==1||check_bishop_move(x0,y0,x,y)==1){
			can_move=true;}
		else 
			can_move=false;
	}
	return can_move;
	
}
						  
int Board1::check_king_move(int x0,int y0,int x,int y)
{
	bool can_move=false;
	
	// 王每次只动一格
	if ((chess[x0][y0]==15&&(chess[x][y]==0||chess[x][y]==26||
		chess[x][y]==21||chess[x][y]==22||chess[x][y]==23||chess[x][y]==24
		||chess[x][y]==25))||(chess[x0][y0]==25&&(chess[x][y]==0||chess[x][y]==16||
		chess[x][y]==11||chess[x][y]==12||chess[x][y]==13||chess[x][y]==14||chess[x][y]==15)))
	{
		if ((abs(x-x0)<=1)&&(abs(y-y0)<=1)){
			can_move=true;}	
		else {}
	}
	return can_move;
}

int Board1::check_pawn_move(int x0,int y0,int x,int y)
{
	bool can_move=false ;
	
	
	if(chess[x0][y0]==16&&(chess[x][y]==0||chess[x][y]==26||chess[x][y]==21||
		chess[x][y]==22||chess[x][y]==23||chess[x][y]==24||chess[x][y]==25))
	{	
		if(chess[x][y]==0)
		{
			//第一步可走一或两格
			if(x0==1&&x==x0+1&&y==y0)
				
			{can_move=true;
			}
			else if(x0==1&&x==x0+2&&y==y0&&chess[x0+1][y0]==0)
			{
				can_move=true;}
			else if(x0>1&&y==y0&&x==x0+1){
				can_move=true;}
		}
		else if (chess[x][y]!=0)
		{	
			if (x==x0+1&&abs(y-y0)==1){
				can_move=true;}
		}
	}
	
	else if (chess[x0][y0]==26&&(chess[x][y]==0||chess[x][y]==16||chess[x][y]==15||
		chess[x][y]==14||chess[x][y]==13||chess[x][y]==12||chess[x][y]==11))
	{
		if(chess[x][y]==0)
		{
			if (x0==6&&y==y0&&(x0-x)==1){
				can_move=true;}
			if(x0==6&&y==y0&&(x0-x)==2&&chess[x0-1][y]==0){
				can_move=true;}
			else if(x0<6&&y==y0&&x==(x0-1)){
				can_move=true;}
		}
		else if (chess[x][y]!=0)
		{
			if((x0-x==1)&&abs(y-y0)==1){
				can_move=true;}
		}
	}
	return can_move;
}