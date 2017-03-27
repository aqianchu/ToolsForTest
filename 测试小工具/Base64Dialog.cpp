// Base64Dialog.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "Base64Dialog.h"
#include "afxdialogex.h"
#include "CUtils.h"


// CBase64Dialog 对话框

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


// CBase64Dialog 消息处理程序


void CBase64Dialog::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
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
	// TODO:  在此添加控件通知处理程序代码
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
	// TODO:  在此添加控件通知处理程序代码
	CString str1, str2;
	GetDlgItemText(IDC_EDIT1, str1);
	GetDlgItemText(IDC_EDIT2, str2);
	if (str1.IsEmpty() || str2.IsEmpty()) {
		return;
	}

	GetDlgItem(IDC_EDIT1)->SetWindowTextW(str2);
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(str1);
}
