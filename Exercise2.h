// Exercise2.h : main header file for the Exercise2 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CExercise2App
// See Exercise2.cpp for the implementation of this class
//

class CExercise2App : public CWinApp
{
public:
	CExercise2App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
