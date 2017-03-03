// URLEncodeEx.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "URLEncodeEx.h"
#include "afxdialogex.h"


// CURLEncodeEx 对话框

IMPLEMENT_DYNAMIC(CURLEncodeEx, CDialogEx)

CURLEncodeEx::CURLEncodeEx(CWnd* pParent /*=NULL*/)
	: CDialogEx(CURLEncodeEx::IDD, pParent)
{

}

CURLEncodeEx::~CURLEncodeEx()
{
}

void CURLEncodeEx::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CURLEncodeEx, CDialogEx)
END_MESSAGE_MAP()


// CURLEncodeEx 消息处理程序
