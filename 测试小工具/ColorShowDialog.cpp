// ColorShowDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "ColorShowDialog.h"
#include "afxdialogex.h"
#include "CUtils.h"
#include <gdipluscolor.h>

#define ARGB(a,r,g,b)          ((COLORREF)(((BYTE)(r)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(b))<<16)|((DWORD)(BYTE)(a)<<24)))

// CColorShowDialog 对话框

IMPLEMENT_DYNAMIC(CColorShowDialog, CDialogEx)

CColorShowDialog::CColorShowDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CColorShowDialog::IDD, pParent)
{

}

CColorShowDialog::~CColorShowDialog()
{
}

void CColorShowDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_PICTURE, m_picture);
}


BEGIN_MESSAGE_MAP(CColorShowDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CColorShowDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// CColorShowDialog 消息处理程序

void CColorShowDialog::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CString cstr;
	GetDlgItemText(IDC_EDIT1, cstr);
	if (cstr.IsEmpty())
	{
		return;
	}
	int inde = cstr.Find('#');
	if (inde == -1 || cstr.GetLength() < 7)
	{
		return;
	}
	DWORD a,r,g,b;
	char *str = StringToChar(CStringToString(cstr));
	if (strlen(str) == 7)
	{
		a = 0;
		sscanf(str, "#%2X%2X%2X", &r, &g, &b);
	}
	else if (strlen(str) == 9)
	{
		sscanf(str, "#%2X%2X%2X%2X", &a, &r, &g, &b);
	}

	//ARGB argb = Color::MakeARGB(a, r, g, b);
	CDC *pDC = m_picture.GetDC();
	CRect rct;
	m_picture.GetWindowRect(&rct);
	CBrush brs;
	/*brs.CreateSolidBrush(RGB(r,g,b));*/
	brs.CreateSolidBrush(ARGB(a,r, g, b));
	CRect picrct;
	picrct.top = 0;
	picrct.left = 0;
	picrct.bottom = rct.Height();
	picrct.right = rct.Width();
	pDC->FillRect(&picrct, &brs);
}
