
// ����С����Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "����С����.h"
#include "����С����Dlg.h"
#include "afxdialogex.h"
#include "TimeReplaceDialog.h"
#include "Base64Dialog.h"
#include "ColorShowDialog.h"
#include "MD5Dialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

	// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	// ʵ��
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
// C����С����Dlg �Ի���

C����С����Dlg::C����С����Dlg(CWnd* pParent /*=NULL*/)
: CDialogEx(C����С����Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C����С����Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(C����С����Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C����С����Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C����С����Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C����С����Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &C����С����Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &C����С����Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &C����С����Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &C����С����Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &C����С����Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &C����С����Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &C����С����Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &C����С����Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &C����С����Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &C����С����Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &C����С����Dlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &C����С����Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &C����С����Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &C����С����Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &C����С����Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &C����С����Dlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &C����С����Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &C����С����Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &C����С����Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &C����С����Dlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &C����С����Dlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &C����С����Dlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &C����С����Dlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON27, &C����С����Dlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON28, &C����С����Dlg::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &C����С����Dlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &C����С����Dlg::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON31, &C����С����Dlg::OnBnClickedButton31)
	ON_BN_CLICKED(IDC_BUTTON32, &C����С����Dlg::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON33, &C����С����Dlg::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &C����С����Dlg::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &C����С����Dlg::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &C����С����Dlg::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &C����С����Dlg::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &C����С����Dlg::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &C����С����Dlg::OnBnClickedButton39)
END_MESSAGE_MAP()


// C����С����Dlg ��Ϣ�������

BOOL C����С����Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	//((CEdit *)GetDlgItem(IDC_EDIT2))->SetWindowTextW(_T("com.qihoo.browser"));
	m_packageName.SetString(_T("com.qihoo.browser"));
	m_Mytip.Create(this);
	m_Mytip.AddTool(GetDlgItem(IDC_BUTTON14), _T("�ù�����Ҫ��װclip.apk")); //IDC_BUTTONΪ��Ҫ�����ʾ��Ϣ�İ�ť��ID
	/*ע�����ҪΪ�����ť��ӹ�����ʾֻ����
		m_Mytip.AddTool(GetDlgItem(IDC_BUTTON), "����Ҫ��ӵ���ʾ��Ϣ");
	�������ټ���������䣬*/
	m_Mytip.SetDelayTime(200); //�����ӳ�
	m_Mytip.SetTipTextColor(RGB(0, 0, 255)); //������ʾ�ı�����ɫ
	m_Mytip.SetTipBkColor(RGB(255, 255, 255)); //������ʾ��ı�����ɫ
	m_Mytip.Activate(TRUE); //�����Ƿ�������ʾ

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

BOOL C����С����Dlg::PreTranslateMessage(MSG* pMsg)
{
	// TODO:  �ڴ����ר�ô����/����û���
	if (pMsg->message == WM_MOUSEMOVE)
		m_Mytip.RelayEvent(pMsg);
	return CDialogEx::PreTranslateMessage(pMsg);
}

void C����С����Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C����С����Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

void C����С����Dlg::OnDestroy()
{
	CDialogEx::OnDestroy();
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C����С����Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C����С����Dlg::OnBnClickedButton1()
{

	ShellExecute(NULL, _T("open"), _T("CopyFile2Current.bat"), NULL, NULL, SW_SHOWNORMAL);
	////system("CopyFile2Current.bat");
}


void C����С����Dlg::OnBnClickedButton2()
{
	ShellExecute(NULL, _T("open"), _T("screencap2Current.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("screencap2Current.bat");
}


void C����С����Dlg::OnBnClickedButton3()
{
	ShellExecute(NULL, _T("open"), _T("screencap2CurrentWithName.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("screencap2CurrentWithName.bat");
}


void C����С����Dlg::OnBnClickedButton4()
{
	ShellExecute(NULL, _T("open"), _T("installapkold.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("installapkold.bat");
}


void C����С����Dlg::OnBnClickedButton5()
{
	ShellExecute(NULL, _T("open"), _T("uninstallapk.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("uninstallapk.bat");
}


void C����С����Dlg::OnBnClickedButton6()
{
	ShellExecute(NULL, _T("open"), _T("checkmemory.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("checkmemory.bat");
}


void C����С����Dlg::OnBnClickedButton7()
{
	ShellExecute(NULL, _T("open"), _T("checkappmeminfo.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("checkappmeminfo.bat");
}


void C����С����Dlg::OnBnClickedButton8()
{
	ShellExecute(NULL, _T("open"), _T("checktextfile.bat"), NULL, NULL, SW_SHOWNORMAL);
//	system("checktextfile.bat");
}


void C����С����Dlg::OnBnClickedButton9()
{
	ShellExecute(NULL, _T("open"), _T("logcatwithtag.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("logcatwithtag.bat");
}


void C����С����Dlg::OnBnClickedButton10()
{
	ShellExecute(NULL, _T("open"), _T("getDeviceinfo.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getDeviceinfo.bat");
}


void C����С����Dlg::OnBnClickedButton11()
{
	ShellExecute(NULL, _T("open"), _T("getphoneip.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getphoneip.bat");
}


void C����С����Dlg::OnBnClickedButton12()
{
	ShellExecute(NULL, _T("open"), _T("getPCipinfo.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getPCipinfo.bat");
}


void C����С����Dlg::OnBnClickedButton13()
{
	ShellExecute(NULL, _T("open"), _T("getphonetime.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getphonetime.bat");
}


void C����С����Dlg::OnBnClickedButton14()
{
	ShellExecute(NULL, _T("open"), _T("getphoneclip.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("getphoneclip.bat");
}


void C����С����Dlg::OnBnClickedButton15()
{
	ShellExecute(NULL, _T("open"), _T("clearappdata.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("clearappdata.bat");
}


void C����С����Dlg::OnBnClickedButton16()
{
	ShellExecute(NULL, _T("open"), _T("fillmemory.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("fillmemory.bat");
}


void C����С����Dlg::OnBnClickedButton17()
{
	ShellExecute(NULL, _T("open"), _T("killappprocess.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("killappprocess.bat");
}


void C����С����Dlg::OnBnClickedButton18()
{
	ShellExecute(NULL, _T("open"), _T("quickrecord.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("quickrecord.bat");
}


void C����С����Dlg::OnBnClickedButton19()
{
	ShellExecute(NULL, _T("open"), _T("quickrecordwithF.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("quickrecordwithF.bat");
}


void C����С����Dlg::OnBnClickedButton20()
{
	ShellExecute(NULL, _T("open"), _T("mspaint.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("start mspaint.exe");
}


void C����С����Dlg::OnBnClickedButton21()
{
	ShellExecute(NULL, _T("open"), _T("regedit.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("start regedit.exe");
}


void C����С����Dlg::OnBnClickedButton22()
{
	ShellExecute(NULL, _T("open"), _T("taskmgr.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("taskmgr.exe");
}


void C����С����Dlg::OnBnClickedButton23()
{
	system("explorer %USERPROFILE%/AppData/");
}


void C����С����Dlg::OnBnClickedButton24()
{
	system("explorer %TEMP%");
}


void C����С����Dlg::OnBnClickedButton25()
{
	system("explorer C:\\Windows\\System32\\Drivers\\etc");
}


void C����С����Dlg::OnBnClickedButton26()
{
	ShellExecute(NULL, _T("open"), _T("useraccountcontrolsettings.exe"), NULL, NULL, SW_SHOWNORMAL);
	//system("useraccountcontrolsettings.exe");
	//TCHAR buf[100];
	//DWORD len = GetLogicalDriveStrings(sizeof(buf) / sizeof(TCHAR), buf);
	//CString strDisks; TCHAR *s;
	//for (s = buf; *s; s += _tcslen(s) + 1)
	//{
	//	LPCTSTR sDrivePath = s; //�����̷� 
	//	strDisks += sDrivePath;
	//	strDisks += " ";
	//}
	//MessageBox(strDisks, NULL, MB_OK);
}


void C����С����Dlg::OnBnClickedButton27()
{
	CString str; //��ȡϵͳʱ�� ����
	CTime tm; tm = CTime::GetCurrentTime();
	str = tm.Format("����ʱ����%Y��%m��%d�� %X");
	MessageBox(str, NULL, MB_OK);
}


void C����С����Dlg::OnBnClickedButton28()
{
	ShellExecute(NULL, _T("open"), _T("crashlog.bat"), NULL, NULL, SW_SHOWNORMAL);
	//system("crashlog.bat");
}


void C����С����Dlg::OnBnClickedButton29()
{
	ShellExecute(NULL, _T("open"), _T("NOTEPAD.EXE"), NULL, NULL, SW_SHOWNORMAL);
}


void C����С����Dlg::OnBnClickedButton30()
{

	//system("CopyFile2SD.bat");
	ShellExecute(NULL, _T("open"), _T("CopyFile2SD.bat"), NULL, NULL, SW_SHOWNORMAL);
}


void C����С����Dlg::OnBnClickedButton32()
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
		MessageBox(_T("����ʧ�ܣ�"),NULL, MB_OK);
	}
}


void C����С����Dlg::OnBnClickedButton31()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	GetDlgItemText(IDC_EDIT1, m_packageName);
}


void C����С����Dlg::OnBnClickedButton33()
{
	ShellExecute(NULL, _T("open"), _T("calc.exe"), NULL, NULL, SW_SHOWNORMAL);
}


void C����С����Dlg::OnBnClickedButton34()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CURLEncodeEx dialog;
	dialog.DoModal();
}


void C����С����Dlg::OnBnClickedButton35()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CTimeReplaceDialog dialog;
	dialog.DoModal();
}


void C����С����Dlg::OnBnClickedButton36()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CBase64Dialog dialog;
	dialog.DoModal();
}


void C����С����Dlg::OnBnClickedButton37()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CColorShowDialog dialog;
	dialog.DoModal();
}


void C����С����Dlg::OnBnClickedButton38()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CMD5Dialog dialog;
	dialog.DoModal();
}


void C����С����Dlg::OnBnClickedButton39()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	system("@adb pull /data/local/tmp/record.mp4");
}
