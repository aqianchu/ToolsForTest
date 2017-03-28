// ColorShowDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "ColorShowDialog.h"
#include "afxdialogex.h"
#include "CUtils.h"
#include <gdipluscolor.h>
#include <ctype.h>

#define ARGB(a,r,g,b)          ((COLORREF)(((BYTE)(r)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(b))<<16)|((DWORD)(BYTE)(a)<<24)))

// CColorShowDialog 对话框

IMPLEMENT_DYNAMIC(CColorShowDialog, CDialogEx)

CColorShowDialog::CColorShowDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(CColorShowDialog::IDD, pParent)
{

}

CColorShowDialog::~CColorShowDialog()
{
	try {
		KillTimer(TIME_NAME);
	}
	catch (exception e) {

	}
}

void CColorShowDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_PICTURE, m_picture);
}


BEGIN_MESSAGE_MAP(CColorShowDialog, CDialogEx)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON1, &CColorShowDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CColorShowDialog::OnBnClickedButton2)
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

void toUpper(char **str)
{
	if (*str) return;
	for (int i = 0; i < strlen(*str); i++)
	{
		*str[i] = toupper(*str[i]);
	}
}
void CColorShowDialog::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//	DWORD   dwPos = GetMessagePos(); 
	//	CPoint point( LOWORD(dwPos),   HIWORD(dwPos) );
	CPoint   point;
	GetCursorPos(&point);
	//	HWND hwnd=::GetForegroundWindow();
	HDC hDC = ::GetDC(NULL);

	// 再获取当前鼠标位置像素值
	COLORREF color = ::GetPixel(hDC, point.x, point.y);
	int red = GetRValue(color);
	int green = GetGValue(color);
	int blue = GetBValue(color);
	char *reds = new char[3], *greens = new char[3], *blues = new char[3];
	_itoa(red, reds, 16); _itoa(green, greens, 16); _itoa(blue, blues, 16);
	if (red < 10)
	{
		reds[1] = reds[0];
		reds[0] = '0';
		reds[2] = '\0';
	}
	if (green < 10)
	{
		greens[1] = greens[0];
		greens[0] = '0';
		greens[2] = '\0';
	}
	if (blue < 10)
	{
		blues[1] = blues[0];
		blues[0] = '0';
		blues[2] = '\0';
	}
	toUpper(&reds); toUpper(&greens); toUpper(&blues);
	CString cstr("#"); cstr += reds; cstr += greens; cstr += blues;
	GetDlgItem(IDC_EDIT1)->SetWindowTextW(cstr);
	CDialogEx::OnTimer(nIDEvent);
}


void CColorShowDialog::OnBnClickedButton2()
{
	// TODO:  在此添加控件通知处理程序代码
	if (flag)
	{
		KillTimer(TIME_NAME);
		GetDlgItem(IDC_BUTTON2)->SetWindowTextW(_T("快速取色"));
		flag = false;
	}
	else {
		SetTimer(TIME_NAME, 40, NULL);
		GetDlgItem(IDC_BUTTON2)->SetWindowTextW(_T("停止取色"));
		flag = true;
	}
}
