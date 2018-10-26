// nationalDlg.cpp : implementation file
#include "stdafx.h"
#include "national.h"
#include "nationalDlg.h" 
#include "chessgo.h"
#include "Diff.h"  
#include "D.h"
#include "hero.h"
#include "lasthero.h"
#include "mmsystem.h."
#include "AI.h" 
#include "diffcanuse.h"
#include "shengji.h"
#pragma comment(lib,"Winmm.lib")
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#define Edge 67
#define first 8
Board1 board1;
AI ai;
#define chessBoard chess
int chess[8][8]={{11,12,13,14,15,13,12,11},{16,16,16,16,16,16,16,16},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},{26,26,26,26,26,26,26,26},{21,22,23,24,25,23,22,21}};
int regretonce[8][8]={0};
int chessbe[8][8]={{11,12,13,14,15,13,12,11},{16,16,16,16,16,16,16,16},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},{26,26,26,26,26,26,26,26},{21,22,23,24,25,23,22,21}};
int chessaf[8][8]={{11,12,13,14,15,13,12,11},{16,16,16,16,16,16,16,16},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},{26,26,26,26,26,26,26,26},{21,22,23,24,25,23,22,21}};
int regrettwice[8][8]={0};
int count=0;
int Go;	
int cango;
extern next_[2][2];
extern int ssm;
shengji sj;
hero hero2;
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//SetDlgItemText(IDC_BUTTON7,_T("开始"));
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNationalDlg dialog

CNationalDlg::CNationalDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNationalDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNationalDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON1);
 	CD about;
	mod = 0;
 	about.DoModal(); 
	::PlaySound((LPCTSTR)IDR_WAVE5, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC|SND_LOOP); //方法二/
}

void CNationalDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNationalDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CNationalDlg, CDialog)
	//{{AFX_MSG_MAP(CNationalDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_LBUTTONDOWN()
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNationalDlg message handlers

BOOL CNationalDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	music=false;
	board.x=600;
	board.y=600;
	SetDlgItemText(IDOK,_T("退出"));
	SetDlgItemText(IDC_BUTTON7,_T("开始"));
	SetDlgItemText(IDC_BUTTON3,_T("英雄榜"));
	SetDlgItemText(IDC_BUTTON1,_T("悔棋"));
	SetDlgItemText(IDC_BUTTON2,_T("音乐"));
	SetDlgItemText(IDC_BUTTON5,_T("人人对战"));
	SetDlgItemText(IDC_BUTTON6,_T("人机对战"));
	
	downonce=false;
	a=0;b=0;
	worb=false;
	paint1o2=false;
	pDC=GetDC();  
	bmp.LoadBitmap (IDB_Back6);	
	memdc.CreateCompatibleDC(pDC);
	pre_dc.CreateCompatibleDC(pDC); 
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CNationalDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
	
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CNationalDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{  
		Drawback();
		OnDrawbotton();
		CDialog::OnPaint();
		
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.




void CNationalDlg::Drawgrid(int x,int y)
{
	CPaintDC dc(this); // device context for painting	
	CPen pen(PS_SOLID,4,RGB(1,230,39));
	pDC->SelectObject(&pen);
	pDC->MoveTo(first+y*Edge+Edge,first+x*Edge);//右上角
	pDC->LineTo(first+y*Edge+Edge,first+x*Edge+Edge);//右下角
	pDC->LineTo(first+y*Edge,first+x*Edge+Edge);//左下角
	pDC->LineTo(first+y*Edge,first+x*Edge);
	pDC->LineTo(first+y*Edge+Edge,first+x*Edge);
}

HCURSOR CNationalDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}



void  CNationalDlg::changequeen(int queenx,int queeny)
{
	if ((chess[a][b]==16||chess[a][b]==26)&&(queenx==0||queenx==7))
	{	
		
		sj.DoModal();
		switch (queenx)
		{
		case 0:
			if (ssm==1){
			chess[queenx][queeny]=24;
			}
			if (ssm==2){
				chess[queenx][queeny]=23;
			}
			if (ssm==3){
				chess[queenx][queeny]=22;
			}
			else if (ssm==4){
				chess[queenx][queeny]=21;
			}
			break;
		case 7:
			if (ssm==1){
				chess[queenx][queeny]=14;
			}
			if (ssm==2){
				chess[queenx][queeny]=13;
			}
			if (ssm==3){
				chess[queenx][queeny]=12;
			}
			if (ssm==4){
				chess[queenx][queeny]=11;
			}
			break;
		}
		chess[a][b]=0;
	}
	else 
	{
		chess[queenx][queeny]=chess[a][b];
		chess[a][b]=0;
	}
}
//////////////////////////////////////////////////////画棋盘和画界面////////////////////////////////////////////////////////////////
void CNationalDlg::Drawback()
{   
	CBitmap *poldBitmap=memdc.SelectObject(&bmp);
		
	bmp.GetBitmap(&bm);

//////////////////////////////////////////////////////////////////轮流顺序
	
	CBitmap trun;
	if (mod==0)
	{
		trun.LoadBitmap(IDB_w);	
	}
	if (mod==1)
	{
		if (paint1o2==true)
		{
			if (!worb)
			{
				trun.LoadBitmap(IDB_w);	
			}
			else if (worb)
			{
				trun.LoadBitmap(IDB_b);
			}
			worb=true;
			paint1o2=false;
			
		}
		else if (paint1o2==false)
		{
			if (!worb)
			{
				trun.LoadBitmap(IDB_w);	
			}
			else if (worb)
			{
				
				trun.LoadBitmap(IDB_b);
				
			}	
		}
	}

	else if (mod==2)
	{
		trun.LoadBitmap(IDB_w);	
	}

	pre_dc.SelectObject(&trun);
	memdc.BitBlt(580,500,bm.bmWidth,bm.bmHeight,&pre_dc,0,0,SRCCOPY);

/////////////////////////////////////////////////////////////////////////////轮流顺序结束




	int i,j;
	CPen pen(PS_SOLID,4,RGB(0,0,0));
	
	memdc.SelectObject(&pen);
	for(i=0;i<9;i++)
	{
		memdc.MoveTo(first+Edge*i,first);
		memdc.LineTo(first+i*Edge,first+Edge*8);
	}
	for(i=0;i<9;i++)
	{
		memdc.MoveTo(first,first+i*Edge);
		memdc.LineTo(Edge*8+first,i*Edge+first);
		}
	for(i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
		{
			CBitmap bmp;
			if (chess[i][j]==0)
			{
				continue;
			}
			if(chess[i][j]!=0)
			{
				switch (chess[i][j])
				{	
					
				case 25:
					bmp.LoadBitmap (IDB_Wking);
					break;
				case 24:
					bmp.LoadBitmap(IDB_Wqueen);
					break;
				case 22:
					bmp.LoadBitmap(IDB_Wknight);
					break;
				case 21:
					bmp.LoadBitmap(IDB_Wrook);
					break;
				case 26:
					bmp.LoadBitmap(IDB_Wpawn);
					break;
				case 23:
					bmp.LoadBitmap(IDB_Wbishop);
					break;
				case 15:
					bmp.LoadBitmap(IDB_Bking);
					break;
				case 14:
					bmp.LoadBitmap(IDB_Bqueen);
					break;
				case 12:
					bmp.LoadBitmap(IDB_Bknight);
					break;
				case 11:
					bmp.LoadBitmap(IDB_Brook);
					break;
				case 16:
					bmp.LoadBitmap(IDB_Bpawn);
					break;
				case 13:
					bmp.LoadBitmap(IDB_Bbishop);
					break;
				}
			}
			pre_dc.SelectObject(&bmp);
			memdc.BitBlt(first+j*Edge,first+i*Edge,bm.bmWidth,bm.bmHeight,&pre_dc,0,0,SRCCOPY);
			
		}	
	}
	CBrush	brush1(RGB(0,0,0));
	CRect	rect1;
	CBrush	brush(RGB(250,250,250));
	CRect	rect;
	for(i=0;i<8;i=i+2)   //i是竖着的，j是横着的。
		for(j=0;j<8;j++)
		{
			if (chess[i][j]==0)
			{
				if(j%2!=0)
					rect1.SetRect(j*Edge+first,i*Edge+first,(j+1)*Edge+first,(i+1)*Edge+first);
				memdc.FillRect(&rect1,&brush1);  
				if(j%2==0)
					rect.SetRect(j*Edge+first,i*Edge+first,(j+1)*Edge+first,(i+1)*Edge+first);
				memdc.FillRect(&rect,&brush); 
			}	
		}		
		for(i=1;i<8;i=i+2)
			for(j=0;j<8;j++)
			{
				if (chess[i][j]==0)
				{
					if(j%2==0)
						rect1.SetRect(j*Edge+first,i*Edge+first,(j+1)*Edge+first,(i+1)*Edge+first);
					memdc.FillRect(&rect1,&brush1);  
					if(j%2!=0)
						rect.SetRect(j*Edge+first,i*Edge+first,(j+1)*Edge+first,(i+1)*Edge+first);
					memdc.FillRect(&rect,&brush); 
				}
			}
		pDC->BitBlt(0,0,bm.bmWidth,bm.bmHeight,&memdc,0,0,SRCCOPY);
		OnDrawbotton();				
}
int CNationalDlg::Wchessgo(int wx,int wy,int wcx,int wcy)
{
	int able;
	switch (chess[wx][wy])
	{
	case 16:
		able=board1.check_pawn_move(wx,wy,wcx,wcy);
		break;
	case 11:
		able=board1.check_rook_move(wx,wy,wcx,wcy);
		break;
	case 12:
		able=board1.check_knight_move(wx,wy,wcx,wcy);
		break;
	case 13:
		able=board1.check_bishop_move(wx,wy,wcx,wcy);
		break;
	case 14:
		able=board1.check_Queen_move(wx,wy,wcx,wcy);
		break;
	case 15:
		able=board1.check_king_move(wx,wy,wcx,wcy);
		break;
		
	}
	return able;
}
int CNationalDlg::Bchessgo(int wx,int wy,int wcx,int wcy)
{
	int able;
	switch (chess[wx][wy])
	{
	case 26:
		able=board1.check_pawn_move(wx,wy,wcx,wcy);
		break;
	case 21:
		able=board1.check_rook_move(wx,wy,wcx,wcy);
		break;
	case 22:
		able=board1.check_knight_move(wx,wy,wcx,wcy);
		break;
	case 23:
		able=board1.check_bishop_move(wx,wy,wcx,wcy);
		break;
	case 24:
		able=board1.check_Queen_move(wx,wy,wcx,wcy);
		break;
	case 25:
		able=board1.check_king_move(wx,wy,wcx,wcy);
		break;	
	}
	return able;
}


void  CNationalDlg::searchwb(int nn,int mm)
{
	switch (chess[nn][mm])
	{
	case 25:
		AfxMessageBox(_T("恭喜黑方获胜！"),MB_OK);
		hero2.DoModal();
		mod=0;
		AfxMessageBox(_T("若继续，请重新点击开始！"),MB_OK);
		break;
	case 15:
		AfxMessageBox(_T("恭喜白方获胜！"),MB_OK);
		hero2.DoModal();
		mod=0;
		AfxMessageBox(_T("若继续，请重新点击开始！"),MB_OK);
		break;	
	}
}
void CNationalDlg::jiangjun(int i,int j)
{
	int x,y;
	for (x=0;x<8;x++)
	{
		for (y=0;y<8;y++)
		{
			Go=Bchessgo(i,j,x,y);
			if (Go==1)
			{
				switch (chess[x][y])
				{
				case 15:
					::PlaySound(MAKEINTRESOURCE(IDR_win), ::GetModuleHandle(NULL), SND_RESOURCE |SND_ASYNC);
					Drawback();
					break;
				case 25:
					::PlaySound(MAKEINTRESOURCE(IDR_win), ::GetModuleHandle(NULL), SND_RESOURCE |SND_ASYNC);
					Drawback();
					break;
				}
			}
		}
	}		
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CNationalDlg::OnLButtonDown(UINT nFlags, CPoint point) 
{
	
	// TODO: Add your message handler code here and/or call default
	if (mod==0)
	{
		AfxMessageBox(_T("~请按开始键开始游戏~"),MB_OK);
	}
	////////////////////////////////////////提醒用户按开始键/////////////////////////////////////////////////
	else if(mod!=0)
	{
		CRect rect1;
	int i,j;
	if (!downonce)
	{											
		if (point.x>=first&&point.x<=first+8*Edge&&point.y>first&&point.y<=first+8*Edge)
		{		
			for(i=0;i<8;i++)
			{
				for(j=0;j<8;j++)
				{ 
					if (point.x>=j*Edge+first&&point.x<=j*Edge+first+Edge&&point.y>=i*Edge+first&&
						point.y<=i*Edge+first+Edge)
					{
						if (chess[i][j]==0)
						{
							downonce=false;
						}
						else if (worb==false&&(chess[i][j]>=11&&chess[i][j]<=16))
						{
								Drawback();
								int x,y;
								for (x=0;x<8;x++)
								{
									for (y=0;y<8;y++)
									{
										cango=Wchessgo(i,j,x,y);
											if (cango==1)
											{
											
												Drawgrid(x,y);
												searchwb(x,y);
											}						
									}
								}
								a=i;
								b=j;
								i=8;j=8;
								downonce=true;		
						}
						else if (worb==true&&(chess[i][j]>=21&&chess[i][j]<=26))
						{
							int x,y;
								for (x=0;x<8;x++)
								{
									for (y=0;y<8;y++)
									{
										cango=Bchessgo(i,j,x,y);
										if (cango==1)
										{
											Drawgrid(x,y);
											searchwb(x,y);
										}
										
									}
								}
								a=i;
								b=j;
								i=8;j=8;
								downonce=true;
								
						}
					}
				}
			}
		}
		
	} 
	else
	{
		int regretx,regrety;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{ 
				if (point.x>=j*Edge+first&&point.x<=j*Edge+first+Edge&&point.y>=i*Edge+first&&
					point.y<=i*Edge+first+Edge)
				{
					
						if (chess[a][b]>=11&&chess[a][b]<=16)
						{
							cango=Wchessgo(a,b,i,j);
						}
						else
						{
							cango=Bchessgo(a,b,i,j);
						}	
					if (cango==1)
					{
						changequeen(i,j);
				
						downonce=false; 					
						Drawback();
						for (regretx=0;regretx<8;regretx++)
						{
							for (regrety=0;regrety<8;regrety++)
							{
								if (count%2==0)
								{
									regretonce[regretx][regrety]=chess[regretx][regrety];
									
								}
								else if (count%2!=0)
								{
									regrettwice[regretx][regrety]=chess[regretx][regrety];
								}

							}
						}
						count++;
						jiangjun(i,j);
						i=8;
						j=8;
						if(mod == 1){
						worb = !worb;
						}
						if(mod == 2){
							ai.changenaltoai();
							int v=ai.Alpha(32767,0);
							ai.movechessaf(next_[0][0],next_[0][1],next_[1][0],next_[1][1]);
							int x,y;
							for (x=0;x<8;x++)
							{
								for ( y=0;y<8;y++)
								{
									cango=Wchessgo(next_[0][0],next_[0][1],x,y);
									if (cango==1)
									{
										
										Drawgrid(x,y);
									}						
								}
								}
							ai.changeaitonal();
							Drawback();
							int wang=0;
							for(int no1=0;no1<8;no1++)
							{
								for (int no2=0;no2<8;no2++)
								{
									if (chess[no1][no2]!=25)
									{
										wang++;	
									}	
								}		
							}
							if (wang==64)
							{
								AfxMessageBox(_T("继续努力！嘿嘿！"),MB_OK);
								mod=0;
								AfxMessageBox(_T("若继续，请重新点击开始！"),MB_OK);
							}

						
							Drawgrid(next_[0][0],next_[0][1]);
							Drawgrid(next_[1][0],next_[1][1]);
						
							for (x=0;x<8;x++)
							{
								for (y=0;y<8;y++)
								{
									Go=Wchessgo(next_[1][0],next_[1][1],x,y);					
									if (Go==1)
									{
										if (chess[x][y]==25)
										{			
											::PlaySound(MAKEINTRESOURCE(IDR_beijiangjun), ::GetModuleHandle(NULL), SND_RESOURCE |SND_ASYNC);
											//AfxMessageBox(_T("白方被将军！"),MB_OK);
											Drawback();
										}
									}						
								}
							}
					
							worb=worb;	
						}
					}
					else 
					{	
						downonce=false;
						Drawback();
						worb=worb;
					}
				}
				
			}
		}
	}	
	}

	CDialog::OnLButtonDown(nFlags, point);
}
void  CNationalDlg::OnDrawbotton()
{
	
	GetDlgItem(IDOK)->RedrawWindow();
	GetDlgItem(IDC_BUTTON7)->RedrawWindow();
	GetDlgItem(IDC_BUTTON1)->RedrawWindow();
	GetDlgItem(IDC_BUTTON2)->RedrawWindow();
	GetDlgItem(IDC_BUTTON3)->RedrawWindow();
	GetDlgItem(IDC_BUTTON5)->RedrawWindow();
	GetDlgItem(IDC_BUTTON6)->RedrawWindow();
} 

void CNationalDlg::OnOK() //主界面，退出
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void CNationalDlg::OnCancel() //主界面，不存在
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CNationalDlg::OnButton3() //主界面，英雄榜
{
	// TODO: Add your control notification handler code here

	lasthero hero1;
	hero1.DoModal();
}
void CNationalDlg::OnButton4() //主界面，不存在
{
	// TODO: Add your control notification handler code here
	 
}

void CNationalDlg::OnButton1() //主界面，悔棋
{
	// TODO: Add your control notification handler code here
	int permitx=0,permity=0;
	if (mod==1)
	{
		if (count>=2)
		{
			count=count-1;
			for (permitx=0;permitx<8;permitx++)
			{
				for (permity=0;permity<8;permity++)
				{
					if (count%2!=0)
					{
						chess[permitx][permity]=regretonce[permitx][permity];
					}
					if (count%2==0)
					{
						chess[permitx][permity]=regrettwice[permitx][permity];
					}	
				}
			}
			count=1;
			Drawback();
			worb=!worb;
		}
	}
	else if (mod==2)
	{
		AfxMessageBox(_T("无法悔棋，不好意思！"),MB_OK);
	}
}


void CNationalDlg::OnButton2() //主界面，音乐，playsound
{
	if (!music)
	{
		::PlaySound(NULL,NULL,0);
		music=true;
	}
	else
	{	
		::PlaySound((LPCTSTR)IDR_WAVE5, AfxGetInstanceHandle(), SND_RESOURCE | SND_ASYNC|SND_LOOP);
		music=false;
	}

}

void CNationalDlg::OnButton5() //主界面，人人对战
{
	// TODO: Add your control notification handler code here
	mod = 1;
	worb=true;
}

void CNationalDlg::OnButton6() //主界面，人机对战
{
	// TODO: Add your control notification handler code here
	mod = 2;
	worb=true;
	diffcanuse about;
	about.DoModal();
	

}



void CNationalDlg::OnButton7() //主界面，开始
{
	// TODO: Add your control notification handler code here
	AfxMessageBox(_T("~请选择模式，人机对战，人人对战~"),MB_OK);
	int i,j;
	chess[0][0] = 11;
	chess[0][1] = 12;
	chess[0][2] = 13;
	chess[0][3] = 14;
	chess[0][4] = 15;
	chess[0][5] = 13;
	chess[0][6] = 12;
	chess[0][7] = 11;
	for(i=0;i<8;i++)
		chess[1][i] = 16;
	for(i=0;i<8;i++)
		for(j=2;j<6;j++)
			chess[j][i] = 0;
	for(i=0;i<8;i++)
		chess[6][i] = 26;
	chess[7][0] = 21;
	chess[7][1] = 22;
	chess[7][2] = 23;
	chess[7][3] = 24;
	chess[7][4] = 25;
	chess[7][5] = 23;
	chess[7][6] = 22;
	chess[7][7] = 21;
	downonce=false;
	a=0;b=0;
	paint1o2=true;
	Drawback();
	mod = 0;	
}