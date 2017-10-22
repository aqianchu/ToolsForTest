#pragma once
#include <time.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
struct tagDate
{
	int year;
	int month;
	int day;
};
int hexCharToInt(char c);
long DateDiff(tagDate date1, tagDate date2);
time_t StringToDatetime(char *str);
long StringToMs(char*str);
SYSTEMTIME TimetToSystemTime(time_t t);
time_t SystemTimeToTimet(SYSTEMTIME st);
SYSTEMTIME Time_tToSystemTime(time_t t);
time_t SystemTimeToTime_t(const SYSTEMTIME& st);
BOOL GetStrFromTime(time_t iTimeStamp, char *pszTime);
char* hexstringToBytes(string s);


string bytestohexstring(char* bytes, int bytelength);