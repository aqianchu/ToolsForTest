// Base64Dialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "����С����.h"
#include "Base64Dialog.h"
#include "afxdialogex.h"
#include "CUtils.h"


// CBase64Dialog �Ի���

IMPLEMENT_DYNAMIC(CBase64Dialog, CDialogEx)

CBase64Dialog::CBase64Dialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CBase64Dialog::IDD, pParent)
{

}

CBase64Dialog::~CBase64Dialog()
{
}

void CBase64Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBase64Dialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CBase64Dialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CBase64Dialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CBase64Dialog::OnBnClickedButton3)
END_MESSAGE_MAP()


// CBase64Dialog ��Ϣ�������


void CBase64Dialog::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	try {
		CString str;
		GetDlgItemText(IDC_EDIT1, str);
		if (str.IsEmpty()) {
			return;
		}
		char *source = CString2char(str);
		char *result = base64_encode(source, strlen(source));
		CString tmp = StringToCString(CharToString(result));
		GetDlgItem(IDC_EDIT2)->SetWindowTextW(tmp);
	}
	catch (exception e) {

	}
}


void CBase64Dialog::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	try {
		CString str;
		GetDlgItemText(IDC_EDIT1, str);
		if (str.IsEmpty()) {
			return;
		}
		char *source = CString2char(str);
		char *result = base64_decode(source, strlen(source));
		CString tmp = StringToCString(CharToString(result));
		GetDlgItem(IDC_EDIT2)->SetWindowTextW(tmp);
	}
	catch (exception e) {

	}
}


void CBase64Dialog::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CString str1, str2;
	GetDlgItemText(IDC_EDIT1, str1);
	GetDlgItemText(IDC_EDIT2, str2);
	if (str1.IsEmpty() || str2.IsEmpty()) {
		return;
	}

	GetDlgItem(IDC_EDIT1)->SetWindowTextW(str2);
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(str1);
}
