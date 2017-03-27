#include "stdafx.h"
#include "CUtils.h"
string ws2s(wstring& ws)

{

	string curLocale = setlocale(LC_ALL, NULL); // curLocale = "C";

	setlocale(LC_ALL, "chs");

	const wchar_t* _Source = ws.c_str();

	size_t _Dsize = 2 * ws.size() + 1;

	char *_Dest = new char[_Dsize];

	memset(_Dest, 0, _Dsize);

	wcstombs(_Dest, _Source, _Dsize);

	string result = _Dest;

	delete[]_Dest;

	setlocale(LC_ALL, curLocale.c_str());

	return result;

}



//---------------------------------------------------------------------------

//��string ת��Ϊwstring

//---------------------------------------------------------------------------



wstring s2ws(const std::string& s)

{

	setlocale(LC_ALL, "chs");

	const char* _Source = s.c_str();

	size_t _Dsize = s.size() + 1;

	wchar_t *_Dest = new wchar_t[_Dsize];

	wmemset(_Dest, 0, _Dsize);

	mbstowcs(_Dest, _Source, _Dsize);

	std::wstring result = _Dest;

	delete[]_Dest;

	setlocale(LC_ALL, "C");

	return result;

}

//----------------------------------------------------

// char *��string

//-----------------------------------------------------



string CharToString(char*arr)

{
	string result(arr);
	return result;

}

//-------------------------------------------------------------

//string��char *

//-----------------------------------------------------------

char * StringToChar(string &str)

{
	int len = str.length();

	char * p = new char[len + 1];

	for (int i = 0; i<len; i++)

	{

		p[i] = str[i];

	}

	p[len] = '\0';
	return p;
}
//---------------------------------------------------------------------------

//  CString��string

//---------------------------------------------------------------------------



std::string CStringToString(const CString& theCStr)
{
	const int theCStrLen = theCStr.GetLength();
	char *buffer = (char*)malloc(sizeof(char)*(theCStrLen + 1));
	memset((void*)buffer, 0, sizeof(buffer));
	buffer[theCStrLen] = '\0';
	WideCharToMultiByte(CP_UTF8, 0, static_cast<CString>(theCStr).GetBuffer(), theCStrLen, buffer, sizeof(char)*(theCStrLen + 1), NULL, NULL);

	std::string STDStr(buffer);
	free((void*)buffer);
	return STDStr;
}

//---------------------------------------------------------------------------

// string��CString

//---------------------------------------------------------------------------



CString StringToCString(string str)

{

	CString cstr(str.c_str());
	return cstr;

}

//-----------------------------------------------------------------

// ��CStringת��Ϊ char*

//-----------------------------------------------------------------

char* CString2char(CString &str)

{

	int len = str.GetLength();

	char* chRtn = (char*)malloc((len * 2 + 1)*sizeof(char));//CString�ĳ����к�����һ������

	memset(chRtn, 0, 2 * len + 1);

	USES_CONVERSION;

	strcpy((LPSTR)chRtn, OLE2A(str.LockBuffer()));

	return chRtn;

}



//----------------------------------------------------------------------

// ��CString��unicode��ת��Ϊchar*(ANSI)

//----------------------------------------------------------------------

char* UCString2Nchar(const CString &s)

{

	int nSize = 2 * s.GetLength();

	char *pAnsiString = new char[nSize + 1];

	wcstombs(pAnsiString, s, nSize + 1);

	return pAnsiString;
}

//--------------------------------------------------------------------------------

//�� ���ֽ�char* ת��Ϊ ���ֽ� wchar*

//-------------------------------------------------------------------------------

wchar_t* AnsiToUnicode(const char* szStr)

{

	int nLen = MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, szStr, -1, NULL, 0);

	if (nLen == 0)

	{

		return NULL;

	}

	wchar_t* pResult = new wchar_t[nLen];

	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, szStr, -1, pResult, nLen);

	return pResult;

}



//-----------------------------------------------------------------------------

//�� ���ֽ� wchar* ת��Ϊ ���ֽ�char*

//-----------------------------------------------------------------------------



void Ascii2WideString(const std::string& szStr, std::wstring& wszStr)

{

	int nLength = MultiByteToWideChar(CP_ACP, 0, szStr.c_str(), -1, NULL, NULL);

	wszStr.resize(nLength);

	LPWSTR lpwszStr = new wchar_t[nLength];

	MultiByteToWideChar(CP_ACP, 0, szStr.c_str(), -1, lpwszStr, nLength);

	wszStr = lpwszStr;

	delete[] lpwszStr;

}

std::string CStringToSTDStr(const CString& theCStr)
{
	const int theCStrLen = theCStr.GetLength();
	char *buffer = (char*)malloc(sizeof(char)*(theCStrLen + 1));
	memset((void*)buffer, 0, sizeof(buffer));
	WideCharToMultiByte(CP_UTF8, 0, static_cast<CString>(theCStr).GetBuffer(), theCStrLen, buffer, sizeof(char)*(theCStrLen + 1), NULL, NULL);

	std::string STDStr(buffer);
	free((void*)buffer);
	return STDStr;
}