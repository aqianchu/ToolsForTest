#pragma once


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
};
