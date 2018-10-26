// nationalDlg.h : header file
// 
#if !defined(AFX_NATIONALDLG_H__DE974B01_0424_4419_A6FB_3811CC2BFDA0__INCLUDED_)
#define AFX_NATIONALDLG_H__DE974B01_0424_4419_A6FB_3811CC2BFDA0__INCLUDED_
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/////////////////////////////////////////////////////////////////////////////
// CNationalDlg dialog

class CNationalDlg : public CDialog
{
// Construction
public:
	CNationalDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CNationalDlg)
	enum { IDD = IDD_NATIONAL_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNationalDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
	public:
		//CD cd;
		CDC memdc;
		CDC	pre_dc;
		CDC *pDC;
		CBitmap bmp;
		BITMAP bm;
		CPoint board;
		BITMAP map;
		
	public:
		bool worb;
		bool music;
		void Drawback();
		void Drawchess(int x,int y,CDC* pDC);
		BOOL downonce;
		void OnDraw();
		void OnDrawbotton();
		void Drawgrid(int x,int y);
		void changequeen(int queenx,int queeny);
		void searchwb(int nn,int mm);
		void jiangjun(int i,int j);
		int Wchessgo(int wx,int wy,int wcx,int wcy);
		int Bchessgo(int wx,int wy,int wcx,int wcy);
	public:
		int check_bus_move (int x0,int y0,int x,int y);
		int check_sco_move(int x0,int y0,int x,int y);
	protected:
		int mod;
		bool paint1o2;
	HICON m_hIcon;
	
	int a,b;
	// Generated message map functions
	//{{AFX_MSG(CNationalDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnButton4();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnButton3();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NATIONALDLG_H__DE974B01_0424_4419_A6FB_3811CC2BFDA0__INCLUDED_)
