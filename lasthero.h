#if !defined(AFX_LASTHERO_H__99BF88F3_8A73_409B_B895_FE8CF69F29CC__INCLUDED_)
#define AFX_LASTHERO_H__99BF88F3_8A73_409B_B895_FE8CF69F29CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// lasthero.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// lasthero dialog

class lasthero : public CDialog
{
// Construction
public:
	lasthero(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(lasthero)
	enum { IDD = IDD_DIALOG4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(lasthero)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(lasthero)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LASTHERO_H__99BF88F3_8A73_409B_B895_FE8CF69F29CC__INCLUDED_)
