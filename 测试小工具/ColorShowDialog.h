#pragma once
#include "afxwin.h"


// CColorShowDialog �Ի���

class CColorShowDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CColorShowDialog)

public:
	CColorShowDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CColorShowDialog();

// �Ի�������
	enum { IDD = IDD_DIALOG4 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CStatic m_picture;
};
