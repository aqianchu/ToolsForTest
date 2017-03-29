#pragma once

#include "Md5.h"
#include "CUtils.h"
// CMD5Dialog 对话框

class CMD5Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMD5Dialog)

public:
	CMD5Dialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMD5Dialog();

// 对话框数据
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
