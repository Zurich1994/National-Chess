// national.h : main header file for the NATIONAL application
//

#if !defined(AFX_NATIONAL_H__94640252_E777_4423_AF0E_AF199F5E6290__INCLUDED_)
#define AFX_NATIONAL_H__94640252_E777_4423_AF0E_AF199F5E6290__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CNationalApp:
// See national.cpp for the implementation of this class
//

class CNationalApp : public CWinApp
{
public:
	CNationalApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNationalApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CNationalApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NATIONAL_H__94640252_E777_4423_AF0E_AF199F5E6290__INCLUDED_)
