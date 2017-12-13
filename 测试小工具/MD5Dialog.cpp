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

// CMD5Dialog 消息处理程序

void CMD5Dialog::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	onBnClick();
}


BOOL CMD5Dialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  在此添加专用代码和/或调用基类
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
				//事件处理代码  
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
