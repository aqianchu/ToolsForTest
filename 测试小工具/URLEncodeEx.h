#pragma once
#include "afxwin.h"
#include "UUtils.h"
#include "CUtils.h"

// CURLEncodeEx 对话框

class CURLEncodeEx : public CDialogEx
{
	DECLARE_DYNAMIC(CURLEncodeEx)

public:
	CURLEncodeEx(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CURLEncodeEx();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_strEdit;
	CString m_dstEdit;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
