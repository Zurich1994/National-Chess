// diffcanuse.cpp : implementation file
//

#include "stdafx.h"
#include "national.h"
#include "diffcanuse.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// diffcanuse dialog
extern int DEPTH;

diffcanuse::diffcanuse(CWnd* pParent /*=NULL*/)
	: CDialog(diffcanuse::IDD, pParent)
{
	//{{AFX_DATA_INIT(diffcanuse)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void diffcanuse::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(diffcanuse)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(diffcanuse, CDialog)
	//{{AFX_MSG_MAP(diffcanuse)
	ON_BN_CLICKED(IDC_RADIO4, OnRadio4)
	ON_BN_CLICKED(IDC_RADIO5, OnRadio5)
	ON_BN_CLICKED(IDC_RADIO6, OnRadio6)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// diffcanuse message handlers

void diffcanuse::OnRadio4() 
{
	// TODO: Add your control notification handler code here
	DEPTH=5;
}

void diffcanuse::OnRadio5() 
{
	// TODO: Add your control notification handler code here
	DEPTH=3;
}

void diffcanuse::OnRadio6() 
{
	// TODO: Add your control notification handler code here
	DEPTH=1;
}

void diffcanuse::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void diffcanuse::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
