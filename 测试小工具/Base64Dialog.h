#pragma once
#include "base64.h"

// CBase64Dialog �Ի���

class CBase64Dialog : public CDialogEx
{
	DECLARE_DYNAMIC(CBase64Dialog)

public:
	CBase64Dialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CBase64Dialog();

// �Ի�������
	enum { IDD = IDD_DIALOG3 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
