// URLEncodeEx.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "URLEncodeEx.h"
#include "afxdialogex.h"
#include "CUtils.h"


// CURLEncodeEx 对话框

IMPLEMENT_DYNAMIC(CURLEncodeEx, CDialogEx)

CURLEncodeEx::CURLEncodeEx(CWnd* pParent /*=NULL*/)
	: CDialogEx(CURLEncodeEx::IDD, pParent)
	, m_strEdit(_T(""))
	, m_dstEdit(_T(""))
{

}

CURLEncodeEx::~CURLEncodeEx()
{
}

void CURLEncodeEx::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_strEdit);
	DDX_Text(pDX, IDC_EDIT2, m_dstEdit);
}


BEGIN_MESSAGE_MAP(CURLEncodeEx, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CURLEncodeEx::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CURLEncodeEx::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CURLEncodeEx::OnBnClickedButton2)
END_MESSAGE_MAP()


// CURLEncodeEx 消息处理程序
/* CString 转char*
CString str = _T("你好，世界！Hello,World");
//注意：以下n和len的值大小不同,n是按字符计算的，len是按字节计算的
int n = str.GetLength();
//获取宽字节字符的大小，大小是按字节计算的
int len = WideCharToMultiByte(CP_ACP,0,str,str.GetLength(),NULL,0,NULL,NULL);
//为多字节字符数组申请空间，数组大小为按字节计算的宽字节字节大小
char * pFileName = new char[len+1];   //以字节为单位
//宽字节编码转换成多字节编码
WideCharToMultiByte(CP_ACP,0,str,str.GetLength(),pFileName,len,NULL,NULL);
pFileName[len+1] = ‘\0‘;   //多字节字符以’\0′结束
*/

/* char*转CString
char * pFileName = "你好，世界！Hello,World";
//计算char *数组大小，以字节为单位，一个汉字占两个字节
int charLen = strlen(pFileName);
//计算多字节字符的大小，按字符计算。
int len = MultiByteToWideChar(CP_ACP,0,pFileName,charLen,NULL,0);
//为宽字节字符数组申请空间，数组大小为按字节计算的多字节字符大小
TCHAR *buf = new TCHAR[len + 1];
//多字节编码转换成宽字节编码
MultiByteToWideChar(CP_ACP,0,pFileName,charLen,buf,len);
buf[len] = ‘\0‘; //添加字符串结尾，注意不是len+1
//将TCHAR数组转换为CString
CString pWideChar;
pWideChar.Append(buf);
//删除缓冲区
delete []buf;
*/

void CURLEncodeEx::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	//UpdateData(true);
	//strCoding cstr;
	//int n = m_strEdit.GetLength();
	////获取宽字节字符的大小，大小是按字节计算的
	//int len = WideCharToMultiByte(CP_ACP, 0, m_strEdit, m_strEdit.GetLength(), NULL, 0, NULL, NULL);
	////为多字节字符数组申请空间，数组大小为按字节计算的宽字节字节大小
	//char * pFileName = new char[len + 1];   //以字节为单位
	////宽字节编码转换成多字节编码
	//WideCharToMultiByte(CP_ACP, 0, m_strEdit, m_strEdit.GetLength(), pFileName, len, NULL, NULL);
	//pFileName[len + 1] = '\0';   //多字节字符以’\0′结束
	//string dst = cstr.UrlUTF8(pFileName);
	//CString csdst(dst.c_str());
	//m_dstEdit = csdst;
	//UpdateData(false);
	//delete pFileName;

	UpdateData(true);
	if (m_strEdit.IsEmpty()) {
		return;
	}
	strCoding cstr;
	char *sour = CString2char(m_strEdit);
	string dst = cstr.UrlUTF8(sour);;
	m_dstEdit = StringToCString(dst);
	UpdateData(false);
	delete sour;
}


void CURLEncodeEx::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
	if (m_strEdit.IsEmpty()) {
		return;
	}
	CString temp1 = m_strEdit;
	strCoding str1;
	string sour1 = CStringToString(temp1);
	string dst1 = str1.UrlUTF8Decode(sour1);
	m_dstEdit = StringToCString(dst1);
	UpdateData(false);
}


void CURLEncodeEx::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData(true);
	if (m_strEdit.IsEmpty()) {
		return;
	}
	CString temp = m_strEdit;
	m_strEdit = m_dstEdit;
	m_dstEdit = temp;
	UpdateData(false);
}


BOOL CURLEncodeEx::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  在此添加专用代码和/或调用基类
	if (pMsg->message == WM_KEYDOWN)
	{
		BOOL bCtrl = ::GetKeyState(VK_CONTROL) & 0x80;
		switch (pMsg->wParam)
		{
		case 'a':
		case 'A':
			if (bCtrl)
			{
				SendDlgItemMessage(IDC_EDIT2, EM_SETSEL, 0, -1);
			}
			break;
		default:
			break;
		}
	}
	return CDialogEx::PreTranslateMessage(pMsg);
}
