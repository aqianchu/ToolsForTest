// URLEncodeEx.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "����С����.h"
#include "URLEncodeEx.h"
#include "afxdialogex.h"
#include "CUtils.h"


// CURLEncodeEx �Ի���

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


// CURLEncodeEx ��Ϣ�������
/* CString תchar*
CString str = _T("��ã����磡Hello,World");
//ע�⣺����n��len��ֵ��С��ͬ,n�ǰ��ַ�����ģ�len�ǰ��ֽڼ����
int n = str.GetLength();
//��ȡ���ֽ��ַ��Ĵ�С����С�ǰ��ֽڼ����
int len = WideCharToMultiByte(CP_ACP,0,str,str.GetLength(),NULL,0,NULL,NULL);
//Ϊ���ֽ��ַ���������ռ䣬�����СΪ���ֽڼ���Ŀ��ֽ��ֽڴ�С
char * pFileName = new char[len+1];   //���ֽ�Ϊ��λ
//���ֽڱ���ת���ɶ��ֽڱ���
WideCharToMultiByte(CP_ACP,0,str,str.GetLength(),pFileName,len,NULL,NULL);
pFileName[len+1] = ��\0��;   //���ֽ��ַ��ԡ�\0�����
*/

/* char*תCString
char * pFileName = "��ã����磡Hello,World";
//����char *�����С�����ֽ�Ϊ��λ��һ������ռ�����ֽ�
int charLen = strlen(pFileName);
//������ֽ��ַ��Ĵ�С�����ַ����㡣
int len = MultiByteToWideChar(CP_ACP,0,pFileName,charLen,NULL,0);
//Ϊ���ֽ��ַ���������ռ䣬�����СΪ���ֽڼ���Ķ��ֽ��ַ���С
TCHAR *buf = new TCHAR[len + 1];
//���ֽڱ���ת���ɿ��ֽڱ���
MultiByteToWideChar(CP_ACP,0,pFileName,charLen,buf,len);
buf[len] = ��\0��; //����ַ�����β��ע�ⲻ��len+1
//��TCHAR����ת��ΪCString
CString pWideChar;
pWideChar.Append(buf);
//ɾ��������
delete []buf;
*/

void CURLEncodeEx::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//UpdateData(true);
	//strCoding cstr;
	//int n = m_strEdit.GetLength();
	////��ȡ���ֽ��ַ��Ĵ�С����С�ǰ��ֽڼ����
	//int len = WideCharToMultiByte(CP_ACP, 0, m_strEdit, m_strEdit.GetLength(), NULL, 0, NULL, NULL);
	////Ϊ���ֽ��ַ���������ռ䣬�����СΪ���ֽڼ���Ŀ��ֽ��ֽڴ�С
	//char * pFileName = new char[len + 1];   //���ֽ�Ϊ��λ
	////���ֽڱ���ת���ɶ��ֽڱ���
	//WideCharToMultiByte(CP_ACP, 0, m_strEdit, m_strEdit.GetLength(), pFileName, len, NULL, NULL);
	//pFileName[len + 1] = '\0';   //���ֽ��ַ��ԡ�\0�����
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  �ڴ����ר�ô����/����û���
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
