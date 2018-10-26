// Diff.cpp : implementation file
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!不存在

#include "stdafx.h"
#include "national.h"
#include "Diff.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDiff dialog


CDiff::CDiff(CWnd* pParent /*=NULL*/)
	: CDialog(CDiff::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDiff)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDiff::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDiff)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDiff, CDialog)
	//{{AFX_MSG_MAP(CDiff)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDiff message handlers

void CDiff::OnOK() //级别——确定
{
	
	// TODO: Add extra validation here
	m_wndIconButton.Create(_T(""),WS_CHILD|WS_VISIBLE|BS_ICON,CRect(1,1,50,60),this,IDOK);
	m_wndIconButton.SetIcon(AfxGetApp()->LoadIcon(IDI_ICON1));
	CDialog::OnOK();
}

void CDiff::OnCancel() //级别——退出
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
