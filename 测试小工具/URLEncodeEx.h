#pragma once
#include "afxwin.h"
#include "UUtils.h"
#include "CUtils.h"

// CURLEncodeEx �Ի���

class CURLEncodeEx : public CDialogEx
{
	DECLARE_DYNAMIC(CURLEncodeEx)

public:
	CURLEncodeEx(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CURLEncodeEx();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_strEdit;
	CString m_dstEdit;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
