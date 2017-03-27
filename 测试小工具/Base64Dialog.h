#pragma once
#include "base64.h"

// CBase64Dialog 对话框

class CBase64Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CBase64Dialog)

public:
	CBase64Dialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CBase64Dialog();

// 对话框数据
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
