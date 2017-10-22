
// 测试小工具Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "测试小工具.h"
#include "测试小工具Dlg.h"
#include "afxdialogex.h"
#include "TimeReplaceDialog.h"
#include "Base64Dialog.h"
#include "ColorShowDialog.h"
#include "MD5Dialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


char* cstring2char(CString str1)
{
	int len = WideCharToMultiByte(CP_ACP, 0, str1, -1, NULL, 0, NULL, NULL);
	char *ptxtTemp = new char[len + 1];
	WideCharToMultiByte(CP_ACP, 0, str1, -1, ptxtTemp, len, NULL, NULL);
	return ptxtTemp;
}
// C测试小工具Dlg 对话框

C测试小工具Dlg::C测试小工具Dlg(CWnd* pParent /*=NULL*/)
: CDialogEx(C测试小工具Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C测试小工具Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(C测试小工具Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C测试小工具Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C测试小工具Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C测试小工具Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &C测试小工具Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &C测试小工具Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &C测试小工具Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &C测试小工具Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &C测试小工具Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &C测试小工具Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &C测试小工具Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &C测试小工具Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &C测试小工具Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &C测试小工具Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &C测试小工具Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &C测试小工具Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &C测试小工具Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &C测试小工具Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &C测试小工具Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &C测试小工具Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &C测试小工具Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &C测试小工具Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &C测试小工具Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &C测试小工具Dlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &C测试小工具Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &C测试小工具Dlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &C测试小工具Dlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &C测试小工具Dlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &C测试小工具Dlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &C测试小工具Dlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &C测试小工具Dlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &C测试小工具Dlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &C测试小工具Dlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &C测试小工具Dlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &C测试小工具Dlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &C测试小工具Dlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &C测试小工具Dlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &C测试小工具Dlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &C测试小工具Dlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &C测试小工具Dlg::OnBnClickedButton39)
END_MESSAGE_MAP()


// C测试小工具Dlg 消息处理程序

BOOL C测试小工具Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	//((CEdit *)GetDlgItem(IDC_EDIT2))->SetWindowTextW(_T("com.qihoo.browser"));
	m_packageName.SetString(_T("com.qihoo.browser"));
	m_Mytip.Create(this);
	m_Mytip.AddTool(GetDlgItem(IDC_BUTTON14), _T("该功能需要安装clip.apk")); //IDC_BUTTON为你要添加提示信息的按钮的ID
	/*注：如果要为多个按钮添加功能提示只需在
		m_Mytip.AddTool(GetDlgItem(IDC_BUTTON), "你想要添加的提示信息");
	的下面再加上类似语句，*/
	m_Mytip.SetDelayTime(200); //设置延迟
	m_Mytip.SetTipTextColor(RGB(0, 0, 255)); //设置提示文本的颜色
	m_Mytip.SetTipBkColor(RGB(255, 255, 255)); //设置提示框的背景颜色
	m_Mytip.Activate(TRUE); //设置是否启用提示

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

BOOL C测试小工具Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  在此添加专用代码和/或调用基类
	if (pMsg->message == WM_MOUSEMOVE)
		m_Mytip.RelayEvent(pMsg);
	return CDialogEx::PreTranslateMessage(pMsg);
}

void C测试小工具Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C测试小工具Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

void C测试小工具Dlg::OnDestroy()
{
	CDialogEx::OnDestroy();
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C测试小工具Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C测试小工具Dlg::OnBnClickedButton1()
{

	ShellExecute(NULL, _T("open"), _T("CopyFile2Current.bat"), NULL, NULL, SW_SHOWNORMAL);
	////system("CopyFile2Current.bat");
}


void C测试小工具Dlg::OnBnClickedButton2()
{
	ShellExecute(NULL, _T("open"), _T("screencap2Current.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("screencap2Current.bat");
}


void C测试小工具Dlg::OnBnClickedButton3()
{
	ShellExecute(NULL, _T("open"), _T("screencap2CurrentWithName.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("screencap2CurrentWithName.bat");
}


void C测试小工具Dlg::OnBnClickedButton4()
{
	ShellExecute(NULL, _T("open"), _T("installapkold.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("installapkold.bat");
}


void C测试小工具Dlg::OnBnClickedButton5()
{
	ShellExecute(NULL, _T("open"), _T("uninstallapk.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("uninstallapk.bat");
}


void C测试小工具Dlg::OnBnClickedButton6()
{
	ShellExecute(NULL, _T("open"), _T("checkmemory.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("checkmemory.bat");
}


void C测试小工具Dlg::OnBnClickedButton7()
{
	ShellExecute(NULL, _T("open"), _T("checkappmeminfo.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("checkappmeminfo.bat");
}


void C测试小工具Dlg::OnBnClickedButton8()
{
	ShellExecute(NULL, _T("open"), _T("checktextfile.bat"), NULL, NULL, SW_SHOWNORMAL);
//	system("checktextfile.bat");
}


void C测试小工具Dlg::OnBnClickedButton9()
{
	ShellExecute(NULL, _T("open"), _T("logcatwithtag.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("logcatwithtag.bat");
}


void C测试小工具Dlg::OnBnClickedButton10()
{
	ShellExecute(NULL, _T("open"), _T("getDeviceinfo.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getDeviceinfo.bat");
}


void C测试小工具Dlg::OnBnClickedButton11()
{
	ShellExecute(NULL, _T("open"), _T("getphoneip.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getphoneip.bat");
}


void C测试小工具Dlg::OnBnClickedButton12()
{
	ShellExecute(NULL, _T("open"), _T("getPCipinfo.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getPCipinfo.bat");
}


void C测试小工具Dlg::OnBnClickedButton13()
{
	ShellExecute(NULL, _T("open"), _T("getphonetime.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getphonetime.bat");
}


void C测试小工具Dlg::OnBnClickedButton14()
{
	ShellExecute(NULL, _T("open"), _T("getphoneclip.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getphoneclip.bat");
}


void C测试小工具Dlg::OnBnClickedButton15()
{
	ShellExecute(NULL, _T("open"), _T("clearappdata.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("clearappdata.bat");
}


void C测试小工具Dlg::OnBnClickedButton16()
{
	ShellExecute(NULL, _T("open"), _T("fillmemory.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("fillmemory.bat");
}


void C测试小工具Dlg::OnBnClickedButton17()
{
	ShellExecute(NULL, _T("open"), _T("killappprocess.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("killappprocess.bat");
}


void C测试小工具Dlg::OnBnClickedButton18()
{
	ShellExecute(NULL, _T("open"), _T("quickrecord.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("quickrecord.bat");
}


void C测试小工具Dlg::OnBnClickedButton19()
{
	ShellExecute(NULL, _T("open"), _T("quickrecordwithF.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("quickrecordwithF.bat");
}


void C测试小工具Dlg::OnBnClickedButton20()
{
	ShellExecute(NULL, _T("open"), _T("mspaint.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("start mspaint.exe");
}


void C测试小工具Dlg::OnBnClickedButton21()
{
	ShellExecute(NULL, _T("open"), _T("regedit.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("start regedit.exe");
}


void C测试小工具Dlg::OnBnClickedButton22()
{
	ShellExecute(NULL, _T("open"), _T("taskmgr.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("taskmgr.exe");
}


void C测试小工具Dlg::OnBnClickedButton23()
{
	system("explorer %USERPROFILE%/AppData/");
}


void C测试小工具Dlg::OnBnClickedButton24()
{
	system("explorer %TEMP%");
}


void C测试小工具Dlg::OnBnClickedButton25()
{
	system("explorer C:\\Windows\\System32\\Drivers\\etc");
}


void C测试小工具Dlg::OnBnClickedButton26()
{
	ShellExecute(NULL, _T("open"), _T("useraccountcontrolsettings.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("useraccountcontrolsettings.exe");
	//TCHAR buf[100];
	//DWORD len = GetLogicalDriveStrings(sizeof(buf) / sizeof(TCHAR), buf);
	//CString strDisks; TCHAR *s;
	//for (s = buf; *s; s += _tcslen(s) + 1)
	//{
	//	LPCTSTR sDrivePath = s; //单个盘符 
	//	strDisks += sDrivePath;
	//	strDisks += " ";
	//}
	//MessageBox(strDisks, NULL, MB_OK);
}


void C测试小工具Dlg::OnBnClickedButton27()
{
	CString str; //获取系统时间 　　
	CTime tm; tm = CTime::GetCurrentTime();
	str = tm.Format("现在时间是%Y年%m月%d日 %X");
	MessageBox(str, NULL, MB_OK);
}


void C测试小工具Dlg::OnBnClickedButton28()
{
	ShellExecute(NULL, _T("open"), _T("crashlog.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("crashlog.bat");
}


void C测试小工具Dlg::OnBnClickedButton29()
{
	ShellExecute(NULL, _T("open"), _T("NOTEPAD.EXE"), NULL, NULL, SW_SHOWNORMAL);
}


void C测试小工具Dlg::OnBnClickedButton30()
{

	//system("CopyFile2SD.bat");
	ShellExecute(NULL, _T("open"), _T("CopyFile2SD.bat"), NULL, NULL, SW_SHOWNORMAL);
}


void C测试小工具Dlg::OnBnClickedButton32()
{
	if (OpenClipboard())
	{
		//CString source("com.qihoo.browser");
		char* sourcec = cstring2char(m_packageName);
		HGLOBAL clipbuffer;
		EmptyClipboard();
		clipbuffer = GlobalAlloc(GMEM_DDESHARE, 17 + 1);
		char *buffer = (char*)GlobalLock(clipbuffer);
		strcpy(buffer, sourcec);
		GlobalUnlock(clipbuffer);
		SetClipboardData(CF_TEXT, clipbuffer);
		delete sourcec;
		CloseClipboard();
	}
	else {
		MessageBox(_T("复制失败！"),NULL, MB_OK);
	}
}


void C测试小工具Dlg::OnBnClickedButton31()
{
	// TODO:  在此添加控件通知处理程序代码
	GetDlgItemText(IDC_EDIT1, m_packageName);
}


void C测试小工具Dlg::OnBnClickedButton33()
{
	ShellExecute(NULL, _T("open"), _T("calc.exe"), NULL, NULL, SW_SHOWNORMAL);
}


void C测试小工具Dlg::OnBnClickedButton34()
{
	// TODO:  在此添加控件通知处理程序代码
	CURLEncodeEx dialog;
	dialog.DoModal();
}


void C测试小工具Dlg::OnBnClickedButton35()
{
	// TODO:  在此添加控件通知处理程序代码
	CTimeReplaceDialog dialog;
	dialog.DoModal();
}


void C测试小工具Dlg::OnBnClickedButton36()
{
	// TODO:  在此添加控件通知处理程序代码
	CBase64Dialog dialog;
	dialog.DoModal();
}


void C测试小工具Dlg::OnBnClickedButton37()
{
	// TODO:  在此添加控件通知处理程序代码
	CColorShowDialog dialog;
	dialog.DoModal();
}


void C测试小工具Dlg::OnBnClickedButton38()
{
	// TODO:  在此添加控件通知处理程序代码
	CMD5Dialog dialog;
	dialog.DoModal();
}


void C测试小工具Dlg::OnBnClickedButton39()
{
	// TODO:  在此添加控件通知处理程序代码
	system("@adb pull /data/local/tmp/record.mp4");
}
