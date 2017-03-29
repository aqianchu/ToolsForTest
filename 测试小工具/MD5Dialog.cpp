// MD5Dialog.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "MD5Dialog.h"
#include "afxdialogex.h"


// CMD5Dialog 对话框

IMPLEMENT_DYNAMIC(CMD5Dialog, CDialogEx)

CMD5Dialog::CMD5Dialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMD5Dialog::IDD, pParent)
{

}

CMD5Dialog::~CMD5Dialog()
{
}
BOOL CMD5Dialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	this->SetWindowText(_T("MD5加密"));
	return TRUE;
}
void CMD5Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMD5Dialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMD5Dialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMD5Dialog 消息处理程序

void CMD5Dialog::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CString str;
	GetDlgItemText(IDC_EDIT1, str);
	if (str.IsEmpty()) {
		return;
	}
	char *source = CString2char(str);
	unsigned char decrypt[16];
	string result;
	MD5_CTX md5;

	MD5Init(&md5);
	MD5Update(&md5,(unsigned char*) source, strlen((char *)source));
	MD5Final(&md5, decrypt);
	//Md5加密后的32位结果
	//printf("\n加密前:%s\n加密后32位:", encrypt);
	
	//Md5加密后的32位结果
	int i = 0;
	for (i = 4; i<12; i++)
	{
		printf("%02x", decrypt[i]);
	}

	//Md5加密后的32位结果
	for (i = 0; i<16; i++)
	{
		printf("%02x", decrypt[i]);
	}

	//CString cresult = StringToCString(CharToString((char*)decrypt));
	//GetDlgItem(IDC_EDIT2)->SetWindowTextW(cresult);
}
