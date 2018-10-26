#if !defined(AFX_HERO_H__44D134C7_9797_4D59_9CB8_D03EFF69BDB8__INCLUDED_)
#define AFX_HERO_H__44D134C7_9797_4D59_9CB8_D03EFF69BDB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// hero.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// hero dialog

class hero : public CDialog
{
// Construction
public:
	hero(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(hero)
	enum { IDD = IDD_DIALOG3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(hero)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(hero)
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnOutofmemoryHotkey1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HERO_H__44D134C7_9797_4D59_9CB8_D03EFF69BDB8__INCLUDED_)
