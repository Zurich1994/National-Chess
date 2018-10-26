#if !defined(AFX_DIFFORE_H__72D4888B_B1F5_4916_84B7_22A10CF6A5D9__INCLUDED_)
#define AFX_DIFFORE_H__72D4888B_B1F5_4916_84B7_22A10CF6A5D9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// diffore.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// diffore dialog

class diffore : public CDialog
{
// Construction
public:
	diffore(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(diffore)
	enum { IDD = IDD_DIALOG6 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(diffore)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(diffore)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIFFORE_H__72D4888B_B1F5_4916_84B7_22A10CF6A5D9__INCLUDED_)
