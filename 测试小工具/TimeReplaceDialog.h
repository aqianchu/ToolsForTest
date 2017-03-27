#pragma once

#include <iostream>
#include <time.h>
#include "CUtils.h"
#include <Windows.h>
#include <stdio.h>
#include <string>
#include "IntUtils.h"
using namespace std;
// CTimeReplaceDialog 对话框

class CTimeReplaceDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CTimeReplaceDialog)

public:
	CTimeReplaceDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CTimeReplaceDialog();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
