#pragma once

#include "Md5.h"
#include "CUtils.h"
// CMD5Dialog �Ի���

class CMD5Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CMD5Dialog)

public:
	CMD5Dialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMD5Dialog();

// �Ի�������
	enum { IDD = IDD_DIALOG5 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
