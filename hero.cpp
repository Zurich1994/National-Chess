// hero.cpp : implementation file
//

#include "stdafx.h"
#include "national.h"
#include "hero.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// hero dialog


hero::hero(CWnd* pParent /*=NULL*/)
	: CDialog(hero::IDD, pParent)
{
	//{{AFX_DATA_INIT(hero)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void hero::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(hero)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(hero, CDialog)
	//{{AFX_MSG_MAP(hero)
	//ON_NOTIFY(NM_OUTOFMEMORY, IDC_HOTKEY1, OnOutofmemoryHotkey1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// hero message handlers

void hero::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void hero::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void hero::OnOutofmemoryHotkey1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	
	*pResult = 0;
}
