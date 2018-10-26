// shengji.cpp : implementation file
//

#include "stdafx.h"
#include "national.h"
#include "shengji.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
extern int ssm;
/////////////////////////////////////////////////////////////////////////////
// shengji dialog


shengji::shengji(CWnd* pParent /*=NULL*/)
	: CDialog(shengji::IDD, pParent)
{
	//{{AFX_DATA_INIT(shengji)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void shengji::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(shengji)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(shengji, CDialog)
	//{{AFX_MSG_MAP(shengji)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO4, OnRadio4)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO3, OnRadio3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// shengji message handlers

void shengji::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	ssm=1;
}

void shengji::OnRadio4() 
{
	// TODO: Add your control notification handler code here
	ssm=3;
}

void shengji::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	ssm=4;
}

void shengji::OnRadio3() 
{
	// TODO: Add your control notification handler code here
	ssm=2;
}

void shengji::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
