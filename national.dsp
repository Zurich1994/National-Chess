# Microsoft Developer Studio Project File - Name="national" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=national - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "national.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "national.mak" CFG="national - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "national - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "national - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "national - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "national - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "national - Win32 Release"
# Name "national - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AI.CPP
# End Source File
# Begin Source File

SOURCE=.\chessgo.cpp
# End Source File
# Begin Source File

SOURCE=.\D.cpp
# End Source File
# Begin Source File

SOURCE=.\Diff.cpp
# End Source File
# Begin Source File

SOURCE=.\diffcanuse.cpp
# End Source File
# Begin Source File

SOURCE=.\diffore.cpp
# End Source File
# Begin Source File

SOURCE=.\hero.cpp
# End Source File
# Begin Source File

SOURCE=.\lasthero.cpp
# End Source File
# Begin Source File

SOURCE=.\national.cpp
# End Source File
# Begin Source File

SOURCE=.\nationalDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\shengji.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AI.H
# End Source File
# Begin Source File

SOURCE=.\chessgo.h
# End Source File
# Begin Source File

SOURCE=.\D.h
# End Source File
# Begin Source File

SOURCE=.\Diff.h
# End Source File
# Begin Source File

SOURCE=.\diffcanuse.h
# End Source File
# Begin Source File

SOURCE=.\diffore.h
# End Source File
# Begin Source File

SOURCE=.\hero.h
# End Source File
# Begin Source File

SOURCE=.\lasthero.h
# End Source File
# Begin Source File

SOURCE=.\national.h
# End Source File
# Begin Source File

SOURCE=.\national.rc
# End Source File
# Begin Source File

SOURCE=.\nationalDlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\shengji.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\1112.bmp
# End Source File
# Begin Source File

SOURCE=.\res\back.bmp
# End Source File
# Begin Source File

SOURCE=.\res\BBBM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\bbishop.bmp
# End Source File
# Begin Source File

SOURCE=.\res\BBKM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BBNM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BBPM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BBQM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BBRM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\bking.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bknight.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bpawn.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bqueen.bmp
# End Source File
# Begin Source File

SOURCE=.\res\brook.bmp
# End Source File
# Begin Source File

SOURCE=.\res\BWBM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BWKM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BWNM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BWPM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BWQM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\BWRM.BMP
# End Source File
# Begin Source File

SOURCE=.\res\chessback.bmp
# End Source File
# Begin Source File

SOURCE=.\res\icon1.ico
# End Source File
# Begin Source File

SOURCE=.\res\national.ico
# End Source File
# Begin Source File

SOURCE=.\res\national.rc2
# End Source File
# Begin Source File

SOURCE=.\res\nwpawn.bmp
# End Source File
# Begin Source File

SOURCE=.\res\untitled.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wbishop.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wking.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wknight.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wpawn.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wqueen.bmp
# End Source File
# Begin Source File

SOURCE=.\res\wrook.bmp
# End Source File
# Begin Source File

SOURCE=".\res\白方走.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\背景1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\黑放走.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\黑王.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\深兵.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\深王.bmp"
# End Source File
# End Group
# Begin Source File

SOURCE=.\res\123.wav
# End Source File
# Begin Source File

SOURCE=.\res\backgroundmusic.mp3
# End Source File
# Begin Source File

SOURCE=".\res\can u feel my world.wav"
# End Source File
# Begin Source File

SOURCE=".\res\every time i think of you.wav"
# End Source File
# Begin Source File

SOURCE=.\res\music.wav
# End Source File
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# Begin Source File

SOURCE=.\res\sound.WAV
# End Source File
# Begin Source File

SOURCE=.\res\WA23.wav
# End Source File
# Begin Source File

SOURCE=".\res\被将军.wav"
# End Source File
# End Target
# End Project
