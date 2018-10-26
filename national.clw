; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=shengji
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "national.h"

ClassCount=10
Class1=CNationalApp
Class2=CNationalDlg
Class3=CAboutDlg

ResourceCount=11
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_DIALOG7
Resource4=IDD_DIALOG5
Resource5=IDD_DIALOG1
Class4=CDiff
Class5=CD
Resource6=IDD_DIALOG2
Class6=hero
Resource7=IDD_DIALOG3
Class7=lasthero
Resource8=IDD_DIALOG4
Class8=diffcanuse
Resource9=IDD_ABOUTBOX (Chinese (Taiwan))
Class9=diffore
Resource10=IDD_DIALOG6
Class10=shengji
Resource11=IDD_NATIONAL_DIALOG (Chinese (Hong Kong))

[CLS:CNationalApp]
Type=0
HeaderFile=national.h
ImplementationFile=national.cpp
Filter=N

[CLS:CNationalDlg]
Type=0
HeaderFile=nationalDlg.h
ImplementationFile=nationalDlg.cpp
Filter=D
LastObject=CNationalDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=nationalDlg.h
ImplementationFile=nationalDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_ABOUTBOX (Chinese (Taiwan))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DIALOG1]
Type=1
Class=CDiff
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RADIO1,button,1342177289
Control4=IDC_RADIO2,button,1342177289
Control5=IDC_RADIO3,button,1342177289

[CLS:CDiff]
Type=0
HeaderFile=Diff.h
ImplementationFile=Diff.cpp
BaseClass=CDialog
Filter=D
LastObject=CDiff
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=CD
ControlCount=1
Control1=IDOK,button,1342242817

[CLS:CD]
Type=0
HeaderFile=D.h
ImplementationFile=D.cpp
BaseClass=CDialog
Filter=D
LastObject=CD
VirtualFilter=dWC

[DLG:IDD_NATIONAL_DIALOG (Chinese (Hong Kong))]
Type=1
Class=CNationalDlg
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_BUTTON3,button,1342242816
Control5=IDC_BUTTON5,button,1342242816
Control6=IDC_BUTTON6,button,1342242816
Control7=IDC_BUTTON7,button,1342242816

[DLG:IDD_DIALOG3]
Type=1
Class=hero
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_HOTKEY1,msctls_hotkey32,1350631424

[CLS:hero]
Type=0
HeaderFile=hero.h
ImplementationFile=hero.cpp
BaseClass=CDialog
Filter=D
LastObject=hero
VirtualFilter=dWC

[DLG:IDD_DIALOG4]
Type=1
Class=lasthero
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308865
Control4=IDC_HOTKEY1,msctls_hotkey32,1350631424

[CLS:lasthero]
Type=0
HeaderFile=lasthero.h
ImplementationFile=lasthero.cpp
BaseClass=CDialog
Filter=D
LastObject=IDCANCEL
VirtualFilter=dWC

[DLG:IDD_DIALOG5]
Type=1
Class=diffcanuse
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RADIO4,button,1342177289
Control4=IDC_RADIO5,button,1342177289
Control5=IDC_RADIO6,button,1342177289

[CLS:diffcanuse]
Type=0
HeaderFile=diffcanuse.h
ImplementationFile=diffcanuse.cpp
BaseClass=CDialog
Filter=D
LastObject=diffcanuse
VirtualFilter=dWC

[DLG:IDD_DIALOG6]
Type=1
Class=diffore
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RADIO1,button,1342177289
Control4=IDC_RADIO2,button,1342177289
Control5=IDC_RADIO3,button,1342177289

[CLS:diffore]
Type=0
HeaderFile=diffore.h
ImplementationFile=diffore.cpp
BaseClass=CDialog
Filter=D
LastObject=diffore

[DLG:IDD_DIALOG7]
Type=1
Class=shengji
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDC_RADIO1,button,1342177289
Control3=IDC_RADIO2,button,1342177289
Control4=IDC_RADIO3,button,1342177289
Control5=IDC_RADIO4,button,1342177289

[CLS:shengji]
Type=0
HeaderFile=shengji.h
ImplementationFile=shengji.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_RADIO1
VirtualFilter=dWC

