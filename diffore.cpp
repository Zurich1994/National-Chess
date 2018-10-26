// diffore.cpp : implementation file
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!²»´æÔÚ

#include "stdafx.h"
#include "national.h"
#include "diffore.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// diffore dialog


diffore::diffore(CWnd* pParent /*=NULL*/)
	: CDialog(diffore::IDD, pParent)
{
	//{{AFX_DATA_INIT(diffore)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void diffore::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(diffore)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(diffore, CDialog)
	//{{AFX_MSG_MAP(diffore)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// diffore message handlers
