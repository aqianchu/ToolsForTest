#pragma once
#include "stdafx.h"
#include <iostream> 
#include <string> 
using namespace std;

string ws2s(wstring& ws);

wstring s2ws(const std::string& s);

// char *��string
string CharToString(char*arr);
char* CString2char(CString &str);
char * StringToChar(string &str);

std::string CStringToString(const CString& theCStr);

CString StringToCString(string str);

//----------------------------------------------------------------------

// ��CString��unicode��ת��Ϊchar*(ANSI)

//----------------------------------------------------------------------

char* UCString2Nchar(const CString &s);

char* UCString2Nchar(const CString &s);

wchar_t* AnsiToUnicode(const char* szStr);

//-----------------------------------------------------------------------------

//�� ���ֽ� wchar* ת��Ϊ ���ֽ�char*

//-----------------------------------------------------------------------------



void Ascii2WideString(const std::string& szStr, std::wstring& wszStr);

std::string CStringToSTDStr(const CString& theCStr);
