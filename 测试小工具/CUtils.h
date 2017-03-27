#pragma once
#include "stdafx.h"
#include <iostream> 
#include <string> 
using namespace std;

string ws2s(wstring& ws);

wstring s2ws(const std::string& s);

// char *到string
string CharToString(char*arr);
char* CString2char(CString &str);
char * StringToChar(string &str);

std::string CStringToString(const CString& theCStr);

CString StringToCString(string str);

//----------------------------------------------------------------------

// 将CString（unicode）转换为char*(ANSI)

//----------------------------------------------------------------------

char* UCString2Nchar(const CString &s);

char* UCString2Nchar(const CString &s);

wchar_t* AnsiToUnicode(const char* szStr);

//-----------------------------------------------------------------------------

//将 宽字节 wchar* 转换为 单字节char*

//-----------------------------------------------------------------------------



void Ascii2WideString(const std::string& szStr, std::wstring& wszStr);

std::string CStringToSTDStr(const CString& theCStr);
