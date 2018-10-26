// D.cpp : implementation file
//

#include "stdafx.h"
#include "national.h"
#include "D.h"
#include "nationalDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CD dialog


CD::CD(CWnd* pParent /*=NULL*/)
	: CDialog(CD::IDD, pParent)
{
	//{{AFX_DATA_INIT(CD)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CD::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CD)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CD, CDialog)
	//{{AFX_MSG_MAP(CD)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CD message handlers

void CD::OnOK() //进入游戏
{
	// TODO: Add extra validation here
	//CNationalDlg cnat;
	//cnat.DoModal();
	//this->ShowWindow(SW_HIDE);
	
	
	CDialog::OnOK();
	
}

void CD::OnCancel() //无该键
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CD::OnPaint() 
{
	CPaintDC dc(this); // device context for painting	
	CDC *pDC1=GetDC();
	 //TODO: Add your message handler code here
	CBitmap bmp1;
	bmp1.LoadBitmap (IDB_Back13);
	CDC memdc1;
	memdc1.CreateCompatibleDC(pDC1);
	CBitmap *poldBitmap=memdc1.SelectObject(&bmp1);
	BITMAP bm1;
	bmp1.GetBitmap(&bm1);
	pDC1->BitBlt(0,0,bm1.bmWidth,bm1.bmHeight,&memdc1,0,0,SRCCOPY);
	memdc1.SelectObject(poldBitmap);	
	// Do not call CDialog::OnPaint() for painting messages
}
