#if !defined(AFX_SHENGJI_H__1BF6D248_A0FB_4469_B816_533A84BCD4B0__INCLUDED_)
#define AFX_SHENGJI_H__1BF6D248_A0FB_4469_B816_533A84BCD4B0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// shengji.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// shengji dialog

class shengji : public CDialog
{
// Construction
public:
	shengji(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(shengji)
	enum { IDD = IDD_DIALOG7 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(shengji)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(shengji)
	afx_msg void OnRadio1();
	afx_msg void OnRadio4();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHENGJI_H__1BF6D248_A0FB_4469_B816_533A84BCD4B0__INCLUDED_)
