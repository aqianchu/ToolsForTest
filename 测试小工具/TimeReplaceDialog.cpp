// TimeReplaceDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "����С����.h"
#include "TimeReplaceDialog.h"
#include "afxdialogex.h"


// CTimeReplaceDialog �Ի���

IMPLEMENT_DYNAMIC(CTimeReplaceDialog, CDialogEx)

CTimeReplaceDialog::CTimeReplaceDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTimeReplaceDialog::IDD, pParent)
{

}

CTimeReplaceDialog::~CTimeReplaceDialog()
{
}

void CTimeReplaceDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}
BOOL CTimeReplaceDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	this->SetWindowText(_T("ʱ��ת��"));
	return TRUE;
}

BEGIN_MESSAGE_MAP(CTimeReplaceDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON4, &CTimeReplaceDialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &CTimeReplaceDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTimeReplaceDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CTimeReplaceDialog::OnBnClickedButton3)
END_MESSAGE_MAP()


// CTimeReplaceDialog ��Ϣ�������
void CTimeReplaceDialog::OnBnClickedButton4()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//time_t t = time(0);
	//char tmp[64];
	//strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A �����%j�� %z",localtime(&t));
	//tmp[38] = '\0';
	//CString result = StringToCString(CharToString(tmp));
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	char buf[100];
	//sprintf(buf, "%4d-%02d-%02d %02d:%02d:%02d.%03d ����%1d\n\0",
	//	sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
	//	sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
	sprintf(buf, "%4d-%02d-%02d %02d:%02d:%02d ����%1d\n\0",
		sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
		sys.wSecond, sys.wDayOfWeek);
	CString result = StringToCString(CharToString(buf));
	GetDlgItem(IDC_EDIT3)->SetWindowTextW(result);
}


void CTimeReplaceDialog::OnBnClickedButton1()
{
	try {
		CString str;
		GetDlgItemText(IDC_EDIT1, str);
		if (str.IsEmpty()) {
			return;
		}
		char *s = CString2char(str);
		long q;
		sscanf(s, "%ld", &q);
		time_t t = (time_t)q;
		char tmp[64];
		strftime(tmp, sizeof(tmp), "%Y-%m-%d %X", localtime(&t));
		tmp[38] = '\0';
		CString result = StringToCString(CharToString(tmp));
		GetDlgItem(IDC_EDIT2)->SetWindowTextW(result);
	}
	catch (exception e) {

	}
}


void CTimeReplaceDialog::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	try {
		CString str;
		GetDlgItemText(IDC_EDIT1, str);
		if (str.IsEmpty()) {
			return;
		}
		char *source = CString2char(str);
		time_t t = StringToDatetime(source);
		string stmp = std::to_string((long)t);
		CString cstr = StringToCString(stmp);
		GetDlgItem(IDC_EDIT2)->SetWindowTextW(cstr);
	}
	catch (exception e) {
		GetDlgItem(IDC_EDIT2)->SetWindowTextW(_T("ת������"));
	}
}


void CTimeReplaceDialog::OnBnClickedButton3()
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
