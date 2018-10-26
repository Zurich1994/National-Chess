// lasthero.cpp : implementation file
//

#include "stdafx.h"
#include "national.h"
#include "lasthero.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// lasthero dialog


lasthero::lasthero(CWnd* pParent /*=NULL*/)
	: CDialog(lasthero::IDD, pParent)
{
	//{{AFX_DATA_INIT(lasthero)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void lasthero::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(lasthero)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(lasthero, CDialog)
	//{{AFX_MSG_MAP(lasthero)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// lasthero message handlers

void lasthero::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void lasthero::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}
