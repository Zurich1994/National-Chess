#if !defined(AFX_DIFF_H__68C12223_BBB1_41EA_914D_C7DB5D665119__INCLUDED_)
#define AFX_DIFF_H__68C12223_BBB1_41EA_914D_C7DB5D665119__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Diff.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDiff dialog

class CDiff : public CDialog
{
// Construction
public:
	CDiff(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDiff)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDiff)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDiff)
	virtual void OnOK();
	virtual void OnCancel();
	CButton m_wndIconButton;
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIFF_H__68C12223_BBB1_41EA_914D_C7DB5D665119__INCLUDED_)
