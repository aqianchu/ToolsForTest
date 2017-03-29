// MD5Dialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "����С����.h"
#include "MD5Dialog.h"
#include "afxdialogex.h"


// CMD5Dialog �Ի���

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
	this->SetWindowText(_T("MD5����"));
	return TRUE;
}
void CMD5Dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMD5Dialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CMD5Dialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// CMD5Dialog ��Ϣ�������

void CMD5Dialog::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	//Md5���ܺ��32λ���
	//printf("\n����ǰ:%s\n���ܺ�32λ:", encrypt);
	
	//Md5���ܺ��32λ���
	int i = 0;
	for (i = 4; i<12; i++)
	{
		printf("%02x", decrypt[i]);
	}

	//Md5���ܺ��32λ���
	for (i = 0; i<16; i++)
	{
		printf("%02x", decrypt[i]);
	}

	//CString cresult = StringToCString(CharToString((char*)decrypt));
	//GetDlgItem(IDC_EDIT2)->SetWindowTextW(cresult);
}
