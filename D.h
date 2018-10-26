#if !defined(AFX_D_H__E43E8811_0DE4_4BCC_B5C1_737E2E0737D3__INCLUDED_)
#define AFX_D_H__E43E8811_0DE4_4BCC_B5C1_737E2E0737D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// D.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CD dialog

class CD : public CDialog
{
// Construction
public:
	CD(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CD)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CD)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CD)
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_D_H__E43E8811_0DE4_4BCC_B5C1_737E2E0737D3__INCLUDED_)
