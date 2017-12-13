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

void CMD5Dialog::onBnClick()
{
	CString cstr;
	GetDlgItemText(IDC_EDIT1, cstr);
	if (cstr.IsEmpty()) {
		return;
	}
	string str = CStringToString(cstr);
	string result = MD5(str).toStr();
	CString cresult = StringToCString(result);
	GetDlgItem(IDC_EDIT2)->SetWindowTextW(cresult);
}

// CMD5Dialog ��Ϣ�������

void CMD5Dialog::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	onBnClick();
}


BOOL CMD5Dialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  �ڴ����ר�ô����/����û���
	int myID;
	CWnd* pWnd = WindowFromPoint(pMsg->pt);
	myID = pWnd->GetDlgCtrlID();

	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)
		{
		case VK_RETURN:
			//bool event1 = myID == IDC_BUTTON1;
			//if (event1){
				//�¼��������  
				onBnClick();
				return TRUE;
			//}
			break;
		default:
			break;
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
